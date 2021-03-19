#include "Brain.hpp"

Brain::Brain(void) {
	this->_thought = 0;
}

Brain::Brain(int thought): _thought(thought) {
	return;
}

std::string Brain::identify(void) const{
	std::stringstream strstream;

	strstream << "0x" << std::uppercase << std::hex << (long)this;
	return (strstream.str());
}
