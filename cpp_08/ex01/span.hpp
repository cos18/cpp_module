#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <set>

class Span {

private:
	std::multiset<int> _set;
	unsigned int _size;

public:
	Span(void);
	Span(unsigned int size);
	Span(const Span &src);
	~Span(void);
	Span &operator=(const Span &rhs);

	class FullSpanException: public std::exception {
		virtual const char *what() const throw();
	};
	class NoSpanToFindException: public std::exception {
		virtual const char *what() const throw();
	};
	void addNumber(int num);

	template <typename InputIterator>
	void addNumber(InputIterator begin, InputIterator end) {
		if (this->_set.size() + std::distance(begin, end) > this->_size)
			throw Span::FullSpanException();
		this->_set.insert(begin, end);
	}

	long long shortestSpan(void);
	long long longestSpan(void);
};

#endif