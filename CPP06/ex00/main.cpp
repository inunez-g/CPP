#include "ScalarConverter.hpp"


int main(int argc, char **argv ) {
    if (argc == 2)
    {
    
        ScalarConverter::convert(argv[1]);
    }
    else
    {
        std::cout << "Bad arguments." << std::endl;
        return 1;
    }
    return 0;
}