#include "ResultValue.hpp"

ResultValue *parseValue(std::string str) {
	if (str.length() == 1 && !std::isdigit(str[0]))
		return new ResultValue(str[0]);
	if (str == "inff" || str == "+inff" || str == "-inff" || str == "nanf") {
		ResultValue *result = new ResultValue(static_cast<float>(atof(str.c_str())));
		result->setFlag(CHAR_TYPE, IMPOSSIBLE);
		result->setFlag(INT_TYPE, IMPOSSIBLE);
		return result;
	}
	if (str == "inf" || str == "+inf" || str == "-inf" || str == "nan") {
		ResultValue *result = new ResultValue(atof(str.c_str()));
		result->setFlag(CHAR_TYPE, IMPOSSIBLE);
		result->setFlag(INT_TYPE, IMPOSSIBLE);
		return result;
	}

	std::stringstream temp;
	int type = INT_TYPE;
	unsigned long locate = 0;

	if (str[0] == '+' || str[0] == '-')
		temp << str[locate++];
	while (locate < str.length()) {
		if (str[locate] == '.') {
			if (type == DOUBLE_TYPE)
				return new ResultValue();
			type = DOUBLE_TYPE;
		} else if (str[locate] == 'e') {
			if (locate == str.length() - 1 ||
				(str[locate + 1] != '+' && str[locate + 1] != '-' && !std::isdigit(str[locate + 1])))
				return new ResultValue();
			type = DOUBLE_TYPE;
			temp << str[locate++];
		} else if (!std::isdigit(str[locate])) {
			if (locate != str.length() - 1 || str[locate] != 'f')
				return new ResultValue();
			type = FLOAT_TYPE;
			break;
		}
		temp << str[locate++];
	}
	switch (type)
	{
	case FLOAT_TYPE:
		float fvalue;
		temp >> fvalue;
		return new ResultValue(fvalue);
	case DOUBLE_TYPE:
		double dvalue;
		temp >> dvalue;
		return new ResultValue(dvalue);
	default:
		long long lvalue;
		temp >> lvalue;
		if (temp.fail() ||
			lvalue < static_cast<long long>(INT_MIN) ||
			static_cast<long long>(INT_MAX) < lvalue)
			return new ResultValue();
		return new ResultValue(static_cast<int>(lvalue));
	}
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Wrong args!\n";
		return 1;
	}
	ResultValue *result = parseValue(argv[1]);
	if (result->getInitialType() == FLOAT_TYPE) {
		if (!(result->isFloatValue()) ||
			result->getF() < static_cast<float>(INT_MIN) ||
			static_cast<float>(INT_MAX) < result->getF())
			result->setFlag(INT_TYPE, IMPOSSIBLE);
	} else if (result->getInitialType() == DOUBLE_TYPE) {
		if (!(result->isDoubleValue()) ||
			result->getD() < static_cast<double>(INT_MIN) ||
			static_cast<double>(INT_MAX) < result->getD())
			result->setFlag(INT_TYPE, IMPOSSIBLE);
	}
	if (result->getFlag(INT_TYPE) == IMPOSSIBLE || result->getI() < 0 || result->getI() > 127)
		result->setFlag(CHAR_TYPE, IMPOSSIBLE);
	else if (!std::isprint(result->getC()))
		result->setFlag(CHAR_TYPE, NON_DISPLAYABLE);
	std::cout << *result;
	delete result;
	return 0;
}