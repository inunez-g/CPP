/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:16:58 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 17:34:39 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    protected:
        const std::string name;
        const std::string target;
        bool isSigned;
        const int grade_to_sign;
        const int grade_to_exec;
    public:
        AForm();
        AForm(std::string const &f_name, std::string const &f_target, bool isSigned, unsigned int f_grade_sign, unsigned int f_grade_exec);
        AForm &operator=(AForm const &other);
        virtual ~AForm();
        AForm(AForm const &other);

        void beSigned(Bureaucrat const &Bureau);

        virtual void execute(Bureaucrat const & executor) const = 0; 

        std::string getName() const;
        const std::string getTarget() const;
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
        class FormNotSignedException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, AForm const &f);

#endif