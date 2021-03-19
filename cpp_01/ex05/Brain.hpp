#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <string>
# include <iostream>

class Brain {
	
private:
	int _thought;

public:
	Brain(void);
	Brain(int thought);
	std::string identify(void) const;

};

#endif
