#include "lib.h"

template<typename T>
void Array<T>::test() {

    Array<int> intArray(3);
    intArray[0] = 10;
    intArray[1] = 20;
    intArray[2] = 30;

    int max = 30;

    if( max == intArray.max()){
        std::cout << "\nTest 1 passed";
    }
    else {
        std::cout << "\nTest 1 failed";
        std::cout << "\nExpected [" << max << "] got [" << intArray.max() << "]";
    }

    int min = 10;

    if( min == intArray.min()){
        std::cout << "\nTest 2 passed";
    }
    else {
        std::cout << "\nTest 2 failed";
        std::cout << "\nExpected [" << min << "] got [" << intArray.min() << "]";
    }

    int index = 0;
    int number = 10;
    if (intArray.index(number) == index){
        std::cout << "\nTest 3 passed";
    }
    else {
        std::cout << "\nTest 3 failed";
        std::cout << "\nExpected [" << index << "] got [" << intArray.index(number) << "]";
    }

    int length = 3;
    if (intArray.getLength() == length){
        std::cout << "\nTest 4 passed";
    }
    else {
        std::cout << "\nTest 4 failed";
        std::cout << "\nExpected [" << length << "] got [" << intArray.getLength() << "]";
    }
}
