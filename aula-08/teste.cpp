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

void teste3() {
  Apartamento *ap = new Apartamento(21, 60);
  std::cout << "Teste dos GETTER de Preco Base";

  /* Como o valor pré-definido de precoBase é zero, o valor esperado é zero */
  std::cout << "Preco Base: " << Apartamento::getPrecoBase() << std::endl;

  /* Definindo preço Base como 200*/
  std::cout << "TESTE DO SETTER De Preco Base" << std::endl <<
  "Definindo precoBase como 200" << std::endl;

  Apartamento::setPrecoBase(200);

  std::cout << "Testando getter de PrecoBase apos a alteracao" << std::endl;
  std::cout << "Preco base: " << ap->getPrecoBase();

}

void teste4() {
  Apartamento::setPrecoBase(250);
  Apartamento *ap = new Apartamento(21, 60);

  std::cout << "Teste do GETTER de Preco Diaria com precoBase estatico" << std::endl;
  std::cout << "Preco Base: " << Apartamento::getPrecoBase() << std::endl;
  std::cout << "Preco Diaria: " << ap->getPrecoDiaria() << std::endl;

  ap->~Apartamento();
}