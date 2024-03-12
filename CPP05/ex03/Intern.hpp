/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:19:20 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 17:19:21 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class Intern
{
    protected:
        typedef AForm *(Intern::*ptr)(std::string form);
        ptr *types;
    public:
        Intern();
        Intern &operator=(Intern const &other);
        ~Intern();
        Intern(Intern const &other);

        AForm *makeForm(std::string form, std::string target);
        AForm *ShubberyCreation(std::string target);
        AForm *RobotomyCreation(std::string target);
        AForm *PresidentialCreation(std::string target);

        class FormNotFoundException : public std::exception
		{
			virtual const char* what() const throw();	
		};
};

#endif