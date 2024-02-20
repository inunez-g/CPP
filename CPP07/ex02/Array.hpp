#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template< typename T>
class Array
{
    private:
        T               *myarray;
        unsigned int    n;
    public:
        Array(): myarray(NULL), n(0) {};
        Array(unsigned int n): myarray(new T[n]), n(n) {};
        Array(const Array<T>&other) {*this = other;}
        Array<T> &operator=(const Array<T> &other) {
            this->n = other.n;
            this->myarray = new T[n];
            for(unsigned int i = 0; i < n; i++)
                this->myarray[i] = other.myarray[i];
        }
        T &operator[](unsigned int i) {
            if(i >= this->n)
                throw std::exception();
            return (this->myarray[i]);
        }
        ~Array()
        {
            delete[] myarray;
        };

        unsigned int size(void)
        {
            return (n);
        }

        
};

#endif