#include "Quarto.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void teste1() {
  try {
    Quarto quarto1(0, 1);
  } catch (invalid_argument e) {
    cout << e.what() << endl;
    delete &e;
  }

  try {
    Quarto quarto2(2, -1);
  } catch (invalid_argument e) {
    cout << e.what() << endl;
    delete &e;
  }

}

void teste2() {
  // Altere conforme o enunciado
}

void teste3() {
  // Altere conforme o enunciado
}