#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

private:
	int _value;
	static const int _bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed &operator=( const Fixed &rhs );
	
	int getRawBits(void) const;
	void setRawBits(const int raw);
	
};

#endif
