#include "Quarto.h"
#include "Reserva.h"
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
  Quarto *q1 = new Quarto(1, 1);
  Reserva *r = nullptr;
  try {
  r = new Reserva(q1, 2, 1, 2);
    
  } catch (invalid_argument *e) {
    cout << e->what() << endl;
    delete e;
  }
  r = nullptr;

  try {
    r = new Reserva(q1, 0, 1, 0);
  } catch (invalid_argument *e) {
    cout << e->what() << endl;
    delete e;
  }
  r = nullptr;

  try {
    r = new Reserva(q1, 0, 1, 3);
  } catch(invalid_argument *e) {
    cout << e->what() << endl;
    delete e;
  }
  r = nullptr;

  try {
    r = new Reserva(q1, 0, 1, 2);
    r->imprimir();
  } catch(invalid_argument *e) {
    cout << e->what() << endl;
    delete e;
  }

  q1->~Quarto();
  r->~Reserva();

}