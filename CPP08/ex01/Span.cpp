/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:10:49 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/07 17:10:50 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0){}

Span::Span(unsigned int n): N(n) {}

Span::Span(const Span& other)
{
    std::cout << "Span Copy constructor called" << std::endl;
	*this = other;
}

Span    &Span::operator=(const Span& other)
{
    std::cout << "Span Assignation operator called" << std::endl;
    this->N = other.N;
	return (*this);
}

Span::~Span(){}

void    Span::addNumber(int number)
{
    try
    {
        if (vec.size() < N)
        {
            vec.push_back(number);
            std::cout << "Number -> " << number << " has been added to the vector." << std::endl;
        }
        else
            throw(std::exception());
    }
    catch(const std::exception &e)
    {
        std::cout << "Couln't fill the vector with the number --> " << number << ". Vector is full." << std::endl;
        std::terminate();
    }
}

int     Span::shortestSpan(void)
{
    try
    {
        if (vec.size() > 1)
        {
            int shortest_diff = INT_MAX;
            std::vector<int> sorted_vec = vec;
            std::sort(sorted_vec.begin(), sorted_vec.end());
            for(size_t i = 1; i < sorted_vec.size(); i++)
            {
                if ((sorted_vec[i] - sorted_vec[i - 1]) < shortest_diff)
                    shortest_diff =  sorted_vec[i] - sorted_vec[i - 1];
            }
            return (shortest_diff);
        }
        else
            throw(std::exception());
    }
    catch(const std::exception &e)
    {
        std::cout << "Cannot find the shortest span because the container has less than two numbers." << std::endl;
        std::terminate();
    }
}

int     Span::longestSpan(void)
{
    try
    {
        if (vec.size() > 1)
            return(*std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end()));
        else
            throw(std::exception());
    }
    catch(const std::exception &e)
    {
        std::cout << "Cannot find the longest span because the container has less than two numbers." << std::endl;
        std::terminate();
    }
}

void    Span::addManyNumbers(void)
{
    for(int i = 0; i < N; i++)
        addNumber(std::rand() % INT_MAX + 1);
}