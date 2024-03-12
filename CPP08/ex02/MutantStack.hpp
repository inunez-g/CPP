/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:41:03 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/07 17:12:19 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
        
    public:
        MutantStack() {} ;
        MutantStack(const MutantStack<T>& other){*this = other;};
        MutantStack    &operator=(const MutantStack<T>& other) {this->c = other.c;
                                                                return (*this);};
        ~MutantStack() {};
        
        typedef typename std::stack<T>::container_type::iterator iter;
        typedef typename std::stack<T>::container_type::reverse_iterator r_iter;
        
        typedef typename std::stack<T>::container_type::const_iterator c_iter;
        typedef typename std::stack<T>::container_type::const_reverse_iterator c_r_iter;

        
        iter begin() { return this->c.begin(); }
        iter end() { return this->c.end(); }
        r_iter rbegin() { return this->c.rbegin(); }
        r_iter rend() { return this->c.rend(); }

        c_iter cbegin() const { return this->c.begin(); }
        c_iter cend() const { return this->c.end(); }
        c_r_iter crbegin() const { return this->c.rbegin(); }
        c_r_iter crend() const { return this->c.rend(); }
};



#endif