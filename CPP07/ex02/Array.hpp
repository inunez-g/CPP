#ifndef ARRAY_HPP
#define ARRAY_HPP

template< typename T>
class ARRAY
{
    private:
        T               *MyArray;
        unsigned int    size;
    public:
        Array(): MyArray(NULL), size(0) {};
        Array(unsigned int n): MyArray(new T[n]), size(n) {};
        ~Array()
        {
            delete[] MyArray;
        };

        unsigned int size(void)
        {
            return (size);
        }

        
};

#endif