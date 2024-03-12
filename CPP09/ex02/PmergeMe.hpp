/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:10:22 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/12 13:10:23 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <ctime>

class PmergeMe{

    private:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        const PmergeMe &operator=(const PmergeMe &copy);
        ~PmergeMe();


    public:
        
        static void sortWithVector(std::vector<int> vec);
        static void sortWithDeque(std::deque<int> deq);
};

#endif