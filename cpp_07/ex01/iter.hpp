#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T *arr, unsigned int len, void (*f)(T const &elt));

#endif
