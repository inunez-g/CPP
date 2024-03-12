/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:19:27 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 17:19:28 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm: public AForm
{
	public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const &target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &other);

        PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		void execute(Bureaucrat const & executor) const; 
	};

#endif