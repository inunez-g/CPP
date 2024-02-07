#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data {
    int value;
    Data(int val) : value(val) {}
};

class Serializer
{
    private:
        Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

std::ostream& operator<<(std::ostream& os, const Data& data) {
    os << data.value;
    return os;
}

#endif