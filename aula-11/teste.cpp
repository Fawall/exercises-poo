#include "Hotel.h"
#include "Quarto.h"
#include <iostream>
#include <list>
#include <iterator>

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
  Hotel* h = new Hotel();
  Quarto *q1 = new Quarto(1);

  h->adicionar(q1);

  Quarto *q2 = new Quarto(2);
  h->adicionar(q2);

  Reserva *r1 = new Reserva(q1, 0, 5);
  Reserva *r2 = new Reserva(q2, 5, 6);

  h->fazer(r1);
  h->fazer(r2);

  h->imprimir();

  h->cancelar(r2);
  h->imprimir();

  h->~Hotel();
  q1->~Quarto();
  q2->~Quarto();
  r2->~Reserva();
}


void teste3(){
  Hotel *h = new Hotel();
  Quarto* q = new Quarto(1);
  Reserva *r = new Reserva(q, 0, 1);
  

  h->adicionar(q);
  
  h->fazer(r);
  std::cout << "TESTE GET RESERVA" << endl;
  std::list<Reserva*> reservas = *(h->getReservas());

  for (Reserva* reserva:reservas) {
    reserva->imprimir();
  }

  cout << endl << "RESERVAS NAO CONFLITANTES" << endl;
  Quarto *q2 = new Quarto(2);
  h->adicionar(q2);
  Reserva *r2 = new Reserva(q, 1, 3);

  h->fazer(r2);
  h->imprimir();

  cout << endl << "TESTAR CANCELAR RESERVA" << endl;

  h->cancelar(r);
  h->imprimir();



}