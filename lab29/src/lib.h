#pragma once

#include <iostream>
#include <cassert>
#include <ctime>
#include <cstdlib>

template <class T>
class Array
{
private:
    int m_length;
    T *m_data;

public:
    Array()
    {
        m_length = 0;
        m_data = nullptr;
    }

    Array(int length)
    {
        m_data = new T[length];
        m_length = length;
    }

    ~Array()
    {
        delete[] m_data;
    }

    void Erase()
    {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    int getLength();
    void print();
    void sort();
    T max();
    T min();
    int index(T num);
    void add_element(T num);
    void remove_element_by_index(int index);
    void test();
};

template <typename T>
int Array<T>::getLength() { return m_length; }

template<class T>
void Array<T>::print() {

    std::cout << "\n";

    for (int i = 0; i < m_length; i++){
        std::cout << m_data[i] << "\n";
    }
}

template<class T>
void Array<T>::sort() {
    int i, j;
    for (i = 0; i < m_length - 1; i++){
        for (j = 0; j < m_length - i - 1; j++) {
            if (m_data[j] > m_data[j + 1]) {
                T temp = m_data[j];
                m_data[j] = m_data[j + 1];
                m_data[j + 1] = temp;
            }
        }
    }
}

template<class T>
T Array<T>::max() {
    T max = m_data[0];
    for (int i = 0; i < m_length; i++)
        if (max < m_data[i])
            max = m_data[i];
    return max;
}

template<class T>
T Array<T>::min() {
    T min = m_data[0];
    for (int i = 0; i < m_length; i++)
        if (min > m_data[i])
            min = m_data[i];
    return min;
}

template<class T>
int Array<T>::index(T num) {

    int index = -1;
    for (int i = 0; i < m_length; i++){
        if (num == m_data[i]){
            index = i;
        }
    }
    return index;
}

template<class T>
void Array<T>::add_element(T num) {
    T* temp = new T[m_length + 1];
    std::copy(m_data, m_data + m_length, temp);
    delete [] m_data;

    ++m_length;
    m_data = temp;
    m_data[m_length - 1] = num;
}

template<class T>
void Array<T>::remove_element_by_index(int index) {

    for (int i = index; i < m_length - 1; i++) {
        m_data[i] = m_data[i + 1];
    }
    m_length--;

    T* temp = new T[m_length + 1];
    std::copy(m_data, m_data + m_length, temp);
    delete [] m_data;

    m_data = temp;
}
//
//template<class T>
//void Array<T>::test() {
//    Array<int> intArray(3);
//    intArray[0] = 10;
//    intArray[1] = 20;
//    intArray[2] = 30;
//
//    int max = 2;
//
//    if( max == intArray.max()){
//        std::cout << "\nTest 1 passed";
//    }
//    else {
//        std::cout << "\nTest 1 failed";
//    }
//
//    int min = 0;
//
//    if( min == intArray.min()){
//        std::cout << "\nTest 2 passed";
//    }
//    else {
//        std::cout << "\nTest 2 failed";
//    }
//
//    int index = 0;
//    int number = 10;
//    if (intArray.index(number) == index){
//        std::cout << "\nTest 3 passed";
//    }
//    else {
//        std::cout << "\nTest 3 failed";
//    }
//
//    int length = 3;
//    if (intArray.getLength() == length){
//        std::cout << "\nTest 4 passed";
//    }
//    else {
//        std::cout << "\nTest 4 failed";
//    }
//}
