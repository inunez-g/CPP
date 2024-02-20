#include "Array.hpp"
#include <iostream>

int main(void)
{
    Array<int> myarray(5);
    Array<char> myarray2(2);

    for(unsigned int i = 0; i < myarray.size(); i++)
        myarray[i] = i;

    for(unsigned int i = 0; i < myarray2.size(); i++)
        myarray2[i] = 'a';
    try
    {
        for(unsigned int i = 0; i < myarray.size(); i++)
            std::cout << myarray[i] << std::endl;

        for(unsigned int i = 0; i < myarray2.size() + 1; i++)
            std::cout << myarray2[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error. Index is out of bounds." << std::endl;
    }

}