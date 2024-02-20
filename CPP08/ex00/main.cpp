#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
    std::cout << "VECTOR" << std::endl;
    std::vector<int>    vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    std::cout << "Buscamos el número 3 en el vector {1,2,3,4,5}" << std::endl;
    if (easyfind(vec, 3) != vec.end())
        std::cout << "The first occurrence of number 3 in the vector is in pos -> " << std::distance(vec.begin(), easyfind(vec, 3)) << std::endl;
    else
        std::cout << "Error. Couldn´t find the number in the vector." << std::endl;

    std::cout << std::endl;
    std::cout << "Buscamos el número 6 en el vector {1,2,3,4,5}" << std::endl;
    if (easyfind(vec, 6) != vec.end())
        std::cout << "The first occurrence of number 6 in the vector is in pos -> " << std::distance(vec.begin(), easyfind(vec, 6)) << std::endl;
    else
        std::cout << "Error. Couldn´t find the number in the vector." << std::endl;
    std::cout << std::endl;
    std::cout << "LISTA" << std::endl;
    std::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    std::cout << "Buscamos el número 1 en la lista {1,2,3,4,5}" << std::endl;
    if (easyfind(vec, 1) != vec.end())
        std::cout << "The first occurrence of number 1 in the vector is in pos -> " << std::distance(vec.begin(), easyfind(vec, 1)) << std::endl;
    else
        std::cout << "Error. Couldn´t find the number in the vector." << std::endl;

    std::cout << std::endl;
    std::cout << "Buscamos el número 12 en la lista {1,2,3,4,5}" << std::endl;
    if (easyfind(vec, 12) != vec.end())
        std::cout << "The first occurrence of number 12 in the vector is in pos -> " << std::distance(vec.begin(), easyfind(vec, 12)) << std::endl;
    else
        std::cout << "Error. Couldn´t find the number in the vector." << std::endl;
}