#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>

class ScalarConverter{

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        // Operador de asignación
        ScalarConverter& operator=(const ScalarConverter& other);
        // Destructor
        ~ScalarConverter();

    public:
        static void    pseudo_literals(const std::string &str);
        static void    convert(const std::string &str);
        static int     input_filter(std::string str);
        static void    print(double doubleValue);
};


#endif