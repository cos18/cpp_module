#ifndef AWESOME_HPP
# define AWESOME_HPP

# include <iostream>

class Awesome {

public:
	Awesome(void);
	Awesome( int n );
	Awesome(const Awesome &src);
	~Awesome(void);
	bool operator==( Awesome const & rhs );
	bool operator!=( Awesome const & rhs );
	bool operator>( Awesome const & rhs );
	bool operator<( Awesome const & rhs );
	bool operator>=( Awesome const & rhs );
	bool operator<=( Awesome const & rhs );

	int getN(void) const;

private:
	int _n;

};

std::ostream &operator<<(std::ostream &o, const Awesome &rhs);

#endif
