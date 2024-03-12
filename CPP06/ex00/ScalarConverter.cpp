/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:04:38 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 18:04:39 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){
	std::cout << "ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter(){

	std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	std::cout << "ScalarConverter Assignation operator called" << std::endl;
    (void)other;
    return (*this);
}


void    ScalarConverter::pseudo_literals(const std::string &str)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (!str.compare("-inff") || !str.compare("nanf") || !str.compare("+inff"))
    {
        std::string _str = str;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << _str.erase(_str.size() - 1, 0) << std::endl;
    }
    else
    {
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
    }
}


void    ScalarConverter::convert(const std::string &str){
    if (!str.compare("-inff") || !str.compare("-inf") || !str.compare("nan") || !str.compare("nanf") || !str.compare("+inff") || !str.compare("+inf"))
        pseudo_literals(str);
    else
    {
        if  (input_filter(str))
        {
            std::cout << "Invalid input" << std::endl;
            return ;
        }
        std::string stri = str;
        if (str.back() == 'f')
            stri.pop_back();
    

        if (str.size() == 1 && !isdigit(str[0])) 
        {
            int inty = static_cast<int>(stri[0]);
            double doubleValue2 = static_cast<double>(inty);
            print(doubleValue2);
        }
        else 
        {
            double doubleValue = std::stod(stri);
                print(doubleValue);
        }
    }
}


int    ScalarConverter::input_filter(std::string str)
{
    
    if (str.size() != 1 )
    {
        int dot = 0;
        unsigned long i = 0;
        while (str[i])
        {
                    
            if (i == 0 && (str[0] != '+' && str[0] != '-' && !isdigit(str[0])))
                    return (1);
            else if (i == (str.size() - 1) && ((str[i] != 'f' && !isdigit(str[i]))))
                    return (1);
            else if (i != (str.size() - 1) && i != 0  && !isdigit(str[i]) && str[i] != '.')
                return (1);
            else if (str[i] == '.')
            {
                dot++;    
                if (dot > 1)
                    return (1);
            }
            i++;

        }
    }
    return (0);
};

void ScalarConverter::print(double doubleValue){

    try {
    std::cout <<  std::fixed << std::setprecision(1);
    if ((static_cast<int>(doubleValue)) < 32 || (static_cast<int>(doubleValue)) > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" <<(static_cast<char>(doubleValue)) << "'" << std::endl;
    std::cout << "int: " <<(static_cast<int>(doubleValue))<< std::endl;
    std::cout << "float: " << static_cast<float>(doubleValue) << "f" <<std::endl;
    std::cout << "double: " <<static_cast<double>(doubleValue) << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << ". Not a valid input." << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << ". Value out of range." << std::endl;
    }
}