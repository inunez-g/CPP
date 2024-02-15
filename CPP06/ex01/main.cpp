#include "Serializer.hpp"

int main(void)
{
    uintptr_t SerializedPtr;

    Data    *DeserializedPtr;
    Data    *Ptr = new Data(2);

    SerializedPtr = Serializer::serialize(Ptr);
    DeserializedPtr = Serializer::deserialize(SerializedPtr);

    std::cout << " 1 Ptr with value --> " << *Ptr << " is equal to 2 DeserializedPtr value --> " << *DeserializedPtr << std::endl;
    std::cout << " 1 Ptr with address --> " << Ptr << " is equal to 2 DeserializedPtr address --> " << DeserializedPtr << std::endl;
    delete Ptr;
}