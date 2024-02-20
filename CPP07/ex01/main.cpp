#include "iter.hpp"

int main(void)
{
    char array[4] = {'H', 'O', 'L', 'A'};

    std::cout << "WITH CHARS:" << std::endl;
    iter<char>(array, 4, ::print_func<char>);

    std::cout << "\nWITH INTS:" << std::endl;
    int array2[5] = {1, 11, 111, 1111, 11111};

    iter<int>(array2, 5, ::print_func<int>);

    std::cout << "\nWITH STRINGS:" << std::endl;
    std::string array3[5] = {"holi", "kaixo", "hey", "hsfhfs", "bonjour"};

    iter<std::string>(array3, 5, ::print_func<std::string>);
}