#include "Serializer.hpp"

int main(void)
{
    uintptr_t SerializedPtr;
    Data    *DeserializedPtr;
    Data    *Ptr = new Data(2);

    SerializedPtr = Serializer::serialize(Ptr);
    DeserializedPtr = Serializer::deserialize(SerializedPtr);

    if (Ptr == DeserializedPtr)
        std::cout << "Ptr with value --> " << *Ptr << " is equal to DeserializedPtr value --> " << *DeserializedPtr << std::endl;
    else
        std::cout << "ERROR!!! Ptr with value --> " << *Ptr << " is not equal to DeserializedPtr value --> " << *DeserializedPtr << std::endl;

    delete Ptr;
}