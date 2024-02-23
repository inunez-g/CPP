#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> vec;
        unsigned int N;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span    &operator=(const Span& other);
        ~Span();

        void    addNumber(int number);
        int     shortestSpan(void);
        int     longestSpan(void);
        void    addManyNumbers(void);

};

#endif