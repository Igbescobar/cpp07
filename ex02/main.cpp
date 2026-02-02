
#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
  std::cout << "Default constructor " << std::endl;
  Array<int> emptyArray;
  std::cout << "Empty array size: " << emptyArray.size() << std::endl;

  std::cout << "\nConstructor with size" << std::endl;
  unsigned int num = 5;
  Array<int> numbers(num);
  std::cout << "Numbers array size: " << numbers.size() << std::endl;
  for (unsigned int i = 0; i < numbers.size(); i++) {
    std::cout << "numbers[" << i << "] = " << numbers[i] << " (0 by default)"
              << std::endl;
  }

  int *a = new int();
  std::cout << "Default initialized int pointer *a = " << *a << std::endl;
  delete a;

  std::cout << "\n Subscript operator [] " << std::endl;
  for (unsigned int i = 0; i < numbers.size(); i++) {
    numbers[i] = i * 10;
    std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
  }

  std::cout << "\nCopy constructor" << std::endl;
  Array<int> copyNumbers(numbers);
  copyNumbers[0] = 999;
  std::cout << "Original numbers[0]: " << numbers[0] << " (unchanged)"
            << std::endl;
  std::cout << "Copy numbers[0]: " << copyNumbers[0] << std::endl;

  std::cout << "\nAssignment operator" << std::endl;
  Array<int> assigned;
  assigned = numbers;
  assigned[1] = 888;
  std::cout << "Original numbers[1]: " << numbers[1] << " (unchanged)"
            << std::endl;
  std::cout << "Assigned numbers[1]: " << assigned[1] << std::endl;

  std::cout << "\nOut-of-bounds access" << std::endl;
  try {
    numbers[10] = 5;
  } catch (const std::exception &e) {
    std::cout << "Caught exception: " << e.what() << std::endl;
  }

  std::cout << "\nTesting with string" << std::endl;
  Array<std::string> words(3);
  words[0] = "Hello";
  words[1] = "Template";
  words[2] = "World";
  for (unsigned int i = 0; i < words.size(); i++) {
    std::cout << "words[" << i << "] = " << words[i] << std::endl;
  }
  return 0;
}
