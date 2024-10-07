#include "Apartamento.h"
#include "Quarto.h"
#include <iostream>

void teste1() {
  Apartamento::setPrecoBase(200);
  Apartamento *ap = new Apartamento(33, 55);
  Apartamento *ap2 = new Apartamento(43, 70);
  Apartamento *ap3 = new Apartamento(53, 120);

  ap->imprimir();
  ap2->imprimir();
  ap3->imprimir();

  ap->~Apartamento();
  ap2->~Apartamento();
  ap3->~Apartamento();
  //Implemente o teste
}
void testex() {
  Quarto *q1 = new Quarto(101, 2, 1);
  Quarto *q2 = new Quarto(102, 4, 2);

  q1->imprimir();
  q2->imprimir();

  delete q1;
  delete q2;
}

void testey(){
  Acomodacao *quarto = new Quarto(201, 4,2);
  Acomodacao *apartamento = new Apartamento(301, 150);

  // Teste do método getPrecoDiaria de Apartamento
  Apartamento *ap = new Apartamento(401, 200);
  std::cout << "Preco diaria do apartamento: " << ap->getPrecoDiaria() << std::endl;

  // Teste do método imprimir de Apartamento
  ap->imprimir();

  delete quarto;
  delete apartamento;
  delete ap;
}


void teste2() { 
  
  Apartamento *ap = new Apartamento(21, 60);
  Apartamento *ap2 = new Apartamento(31, 85);
  Apartamento *ap3 = new Apartamento(41, 105);

  Apartamento::setPrecoBase(150);

  ap->imprimir();
  ap2->imprimir();
  ap3->imprimir();

  Apartamento::setPrecoBase(300);
  ap->imprimir();
  ap2->imprimir();
  ap3->imprimir();
  
  ap->~Apartamento();
  ap2->~Apartamento();
  ap3->~Apartamento();
  
}

