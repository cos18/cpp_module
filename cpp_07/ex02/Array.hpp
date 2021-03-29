#ifndef ARRAY_H
# define ARRAY_H

template<typename T>
class Array {

private:
	unsigned int _size;
	T *_elements;

public:
	Array(void);
	Array(unsigned int n);
	Array(const Array &src);
	virtual ~Array(void);
	Array &operator=(const Array &rhs);

	class ForbiddenIndex: public std::exception {
		virtual const char *what() const throw();
	};
	T &operator[](unsigned int idx);
	const T &operator[](unsigned int idx) const;
	unsigned int size(void) const;
};



#endif
