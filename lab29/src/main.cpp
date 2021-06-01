#include "lib.h"

int main()
{

    srand(time(NULL));

    Array<int> intArray(10);
    Array<double> doubleArray(10);

    for (int i = 0; i < intArray.getLength(); i++)
    {
        intArray[i] = rand() % 50;
        doubleArray[i] = rand() % 50 +0.5;
    }

    std::cout << "Int arr:\n";
    intArray.print();

    std::cout << "\nDouble arr:\n";
    doubleArray.print();

    intArray.sort();
    std::cout << "\nSorted int:\n";
    intArray.print();

    doubleArray.sort();
    std::cout << "\nSorted double:\n";
    doubleArray.print();

    std::cout << "\nMax int element: " << intArray.max();
    std::cout << "\nMax double element: " << doubleArray.max();
    std::cout << "\n";
    std::cout << "\nMax int element: " << intArray.min();
    std::cout << "\nMax double element: " << doubleArray.min();

    std::cout << "\n";
    int number;
    std::cout << "\nEnter a number from the integer array which you want to find (by index): ";
    std::cin >> number;
    std::cout << "\nYour number index is: " << intArray.index(number);

    std::cout << "\nEnter a number from the double array which you want to find (by index): ";
    std::cin >> number;
    std::cout << "\nYour number index is: " << doubleArray.index(number);

    std::cout << "\nAdded new element (100):";
    intArray.add_element(100);
    intArray.print();

    std::cout << "\nAdded new element (1.1):";
    doubleArray.add_element(1.1);
    doubleArray.print();

    int index = 3;
    std::cout << "\nRemove int element by index (" << index << "):";
    intArray.remove_element_by_index(index);
    intArray.print();

    std::cout << "\nRemove double element by index (" << index << "):";
    doubleArray.remove_element_by_index(index);
    doubleArray.print();

    std::cout << "\n";
    intArray.test();

    return 0;
}