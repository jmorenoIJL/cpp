#include <iostream>

int main() {
  int num, sum = 0;
  float average;
  
  for (int i = 0; i < 5; i++) {
    std::cout << "Ingrese un número: ";
    std::cin >> num;
    sum += num;
  }
  
  average = (float)sum / 5;
  std::cout << "El promedio es: " << average << std::endl;
  
  return 0;
}