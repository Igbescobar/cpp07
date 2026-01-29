#include <iostream>
#include <string>
#include "Iter.hpp"  

template <typename T>

void print(const T &x) {
    std::cout << x << " ";
}

void increment(int &x) {
    x++;
}

void doubleValue(double &x) {
    x *= 2;
}

void addExclamation(std::string &s) {
    s += "!";
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    const int sizeInt = 5;

    std::cout << "Original int array: ";
    iter(numbers, sizeInt, print<int>);
    std::cout << std::endl;

    iter(numbers, sizeInt, increment);

    std::cout << "After increment: ";
    iter(numbers, sizeInt, print<int>);
    std::cout << std::endl << std::endl;

    double decimals[] = {1.1, 2.2, 3.3};
    const int sizeDouble = 3;

    std::cout << "Original double array: ";
    iter(decimals, sizeDouble, print<double>);
    std::cout << std::endl;

    iter(decimals, sizeDouble, doubleValue);

    std::cout << "After doubling: ";
    iter(decimals, sizeDouble, print<double>);
    std::cout << std::endl << std::endl;

    std::string words[] = {"Hello", "World", "C++"};
    const int sizeString = 3;

    std::cout << "Original string array: ";
    iter(words, sizeString, print<std::string>);
    std::cout << std::endl;

    iter(words, sizeString, addExclamation);

    std::cout << "After adding exclamation: ";
    iter(words, sizeString, print<std::string>);
    std::cout << std::endl;

    return 0;
}

