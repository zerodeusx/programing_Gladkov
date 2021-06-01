#include "lib.h"

void test(){

    int amount = 1;
    string filename = "filename.txt";
    ofstream MyFile(filename);
    MyFile << amount;

    MyFile.close();

    int number;
    ifstream MyReadFile(filename);
    MyReadFile >> number;

    if (number == amount){
        std::cout << "\nTest passed!";
    }
    else {
        std::cout << "\nTest failed!";
        std::cout << "\n\nExpected: " << amount;
        std::cout << "\nGot: " << number;
    }
}