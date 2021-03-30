#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <map>

template<typename T>
typename T::iterator easyfind(T &container, int value) {
	return (std::find(container.begin(), container.end(), value));
}

template<typename T, typename U>
typename std::map<T, U>::iterator easyfind(std::map<T, U> &container, int value) {
	return (container.find())
}

#endif