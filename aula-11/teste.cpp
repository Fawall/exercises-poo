#include "Hotel.h"
#include "Quarto.h"

void teste1() {
  Hotel* h = new Hotel();
  Quarto *q1 = new Quarto(1);

  h->adicionar(q1);

  Quarto *q2 = new Quarto(2);
  h->adicionar(q2);

  h->imprimir();

  h->~Hotel();
  q1->~Quarto();
  q2->~Quarto();
}

void teste2() {
  // implemente
}