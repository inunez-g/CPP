#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int grade_to_sign;
        const int grade_to_exec;
    public:
        Form();
        Form(std::string const &f_name, unsigned int f_grade_sign, unsigned int f_grade_exec);
        Form &operator=(Form const &other);
        ~Form();
        Form(Form const &other);

        void beSigned(Bureaucrat const &Bureau);

        std::string getName() const;
        bool getSigned() const;
        unsigned int getGradeSign() const;
        unsigned int getGradeExec() const;

        class HighGradeException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class LowGradeException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif