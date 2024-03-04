/*
Todos conocemos el dicho, "Donde comen N comen N + 1". Necesitamos un programa que, dado un número N, imprima N + 1.

Input
Una linea que contiene un único entero N(1 ≤ N ≤ 100).

Output
Una linea con un único entero, N + 1.
*/

#include <iostream>
#include <assert.h>

int main() {
  int number{0};
  std::cin >> number;
  assert(number <= 100 && number >= 1);
  std::cout << number + 1;
  return 0;
}