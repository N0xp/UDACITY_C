#include <iostream>
#include <string>
void PrintString(std::string, int);
void PrintString(std::string str, int n) {
  for (int i = 0; i < n; ++i) {
    std::cout << str << std::endl;
  }
}