#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {

private:
	const Brain _brain;

public:
	const Brain &getBrain(void) const;
	std::string identify(void) const;

};

#endif