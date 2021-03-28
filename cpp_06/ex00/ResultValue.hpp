#ifndef RESULT_VALUE_HPP
# define RESULT_VALUE_HPP

# include <climits>
# include <iostream>
# include <sstream>
# include <cmath>

# define NON_DISPLAYABLE 1
# define IMPOSSIBLE 2
# define ND_MSG "Non displayable"
# define IMP_MSG "impossible"

# define CHAR_TYPE 0
# define INT_TYPE 1
# define FLOAT_TYPE 2
# define DOUBLE_TYPE 3
# define UNKNOWN_TYPE 4

class ResultValue {

private:
	int _initial_type;
	int _flag[4];
	char _c;
	int _i;
	float _f;
	double _d;

public:
	ResultValue(void);
	ResultValue(char c);
	ResultValue(int i);
	ResultValue(float f);
	ResultValue(double d);
	ResultValue(const ResultValue &src);
	~ResultValue(void);
	ResultValue &operator=(const ResultValue &rhs);

	void setFlag(int idx, int value);
	int getInitialType(void) const;
	int getFlag(int idx) const;
	char getC(void) const;
	int getI(void) const;
	float getF(void) const;
	double getD(void) const;
	bool isFloatValue(void) const;
	bool isDoubleValue(void) const;
	
};

std::ostream &operator<<(std::ostream &o, const ResultValue &rhs);

#endif