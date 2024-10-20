#include "Quarto.h"
#include "SemEspaco.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void teste1() {
  try {
    Quarto quarto1(0, 1);
  } catch (invalid_argument *e) {
    cout << e->what() << endl;
    delete &e;
  }

  try {
    Quarto quarto2(2, -1);
  } catch (invalid_argument *e) {
    cout << e->what() << endl;
    delete &e;
  }

}

void teste2() {
  Quarto *q1 = new Quarto(1, 2);

  q1->imprimir();

  try {
    q1->getPrecoDiaria(5);
  } catch (SemEspaco *e) {
    cout << e->what();
    delete e;
  } 

  q1->~Quarto();
}

void teste3() {
  // Altere conforme o enunciado
}