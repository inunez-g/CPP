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
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

inline std::ostream& operator<<(std::ostream& os, const Data& data) {
    os << data.value;
    return os;
}

#endif