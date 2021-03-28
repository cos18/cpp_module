#include "ResultValue.hpp"

ResultValue::ResultValue(void):
	_initial_type(UNKNOWN_TYPE),
	_c(0),
	_i(0),
	_f(0),
	_d(0)
{
	for (int i = 0; i < 4; i++)
		_flag[i] = IMPOSSIBLE;
}

ResultValue::ResultValue(char c):
	_initial_type(CHAR_TYPE),
	_c(c),
	_i(static_cast<int>(c)),
	_f(static_cast<float>(c)),
	_d(static_cast<double>(c))
{
	for (int i = 0; i < 4; i++)
		_flag[i] = 0;
}

ResultValue::ResultValue(int i):
	_initial_type(INT_TYPE),
	_c(static_cast<char>(i)),
	_i(i),
	_f(static_cast<float>(i)),
	_d(static_cast<double>(i))
{
	for (int i = 0; i < 4; i++)
		_flag[i] = 0;
}

ResultValue::ResultValue(float f):
	_initial_type(FLOAT_TYPE),
	_c(static_cast<char>(f)),
	_i(static_cast<int>(f)),
	_f(f),
	_d(static_cast<double>(f))
{
	for (int i = 0; i < 4; i++)
		_flag[i] = 0;
}

ResultValue::ResultValue(double d):
	_initial_type(DOUBLE_TYPE),
	_c(static_cast<char>(d)),
	_i(static_cast<int>(d)),
	_f(static_cast<float>(d)),
	_d(d)
{
	for (int i = 0; i < 4; i++)
		_flag[i] = 0;
}

ResultValue::ResultValue(const ResultValue &src):
	_c(src._c),
	_i(src._i),
	_f(src._f),
	_d(src._d)
{
	for (int i = 0; i < 4; i++)
		_flag[i] = src._flag[i];
}

ResultValue::~ResultValue(void) {
	return;
}

ResultValue &ResultValue::operator=(const ResultValue &rhs) {
	for (int i = 0; i < 4; i++)
		_flag[i] = rhs._flag[i];
	_c = rhs._c;
	_i = rhs._i;
	_f = rhs._f;
	_d = rhs._d;
	return *this;
}

void ResultValue::setFlag(int idx, int value) {
	_flag[idx] = value;
}

int ResultValue::getInitialType(void) const {
	return _initial_type;
}

int ResultValue::getFlag(int idx) const {
	return _flag[idx];
}

char ResultValue::getC(void) const {
	return _c;
}

int ResultValue::getI(void) const {
	return _i;
}

float ResultValue::getF(void) const {
	return _f;
}

double ResultValue::getD(void) const {
	return _d;
}

bool ResultValue::isFloatValue(void) const {
	return !(std::isnan(_f) || std::isinf(_f));
}

bool ResultValue::isDoubleValue(void) const {
	return !(std::isnan(_d) || std::isinf(_d));
}

std::ostream &operator<<(std::ostream &o, const ResultValue &rhs) {
	std::string type_name[4] = {
		"char",
		"int",
		"float",
		"double"
	};
	for (int i = 0; i < 4; i++) {
		std::stringstream temp;
		std::string temp_str;
		o << type_name[i] << ": ";
		switch (rhs.getFlag(i))
		{
		case NON_DISPLAYABLE:
			o << ND_MSG;
			break;
		case IMPOSSIBLE:
			o << IMP_MSG;
			break;
		default:
			switch (i)
			{
				case 0:
					o << "'" << rhs.getC() << "'";
					break;
				case 1:
					o << rhs.getI();
					break;
				case 2:
					temp << rhs.getF();
					temp_str = temp.str();
					if (rhs.isFloatValue() && temp_str.find('.') == std::string::npos)
						temp << ".0";
					temp << "f";
					o << temp.str();
					break;
				default:
					temp << rhs.getD();
					temp_str = temp.str();
					if (rhs.isDoubleValue() && temp_str.find('.') == std::string::npos)
						temp << ".0";
					o << temp.str();
			}
		}
		o << std::endl;
	}
	return o;
}