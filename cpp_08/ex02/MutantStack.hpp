#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <deque>

template<typename T>
class MutantStack: public std::stack<T>
{

public:
	MutantStack(): std::stack<T>() {}
	MutantStack(MutantStack<T> const &src): std::stack<T>(src) {};
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	MutantStack<T> &operator=(MutantStack<T> const &other){
		this->c = other.c;
		return (*this);
	}

	typename MutantStack<T>::iterator begin(void) {
		return (this->c.begin());
	}

	typename MutantStack<T>::reverse_iterator rbegin(void) {
		return (this->c.rbegin());
	}

	typename MutantStack<T>::iterator end(void) {
		return (this->c.end());
	}

	typename MutantStack<T>::reverse_iterator rend(void) {
		return (this->c.rend());
	}
	
};

#endif