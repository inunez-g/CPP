#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename T>
void iter(T *array, int len, T f(T &elem))
{
    int i = 0;

    while (i < len)
    {
        array[i] = f(array[i]);
        i++;
    }
}

template< typename T>
T print_func(T &character){

	std::cout << character << std::endl;
    return character;
}

#endif