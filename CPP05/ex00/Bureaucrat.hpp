/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:51:58 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 16:51:59 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class   Bureaucrat
{
    private:
        const std::string name;
        unsigned int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const &b_name, unsigned int b_grade);
        Bureaucrat &operator=(Bureaucrat const &other);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &other);

        std::string getName() const; 
        unsigned int getGrade() const;
        void increment_grade();
        void decrement_grade();

        class HighGradeException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class LowGradeException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureau);

#endif