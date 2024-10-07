#include "Acomodacao.h"
#include "Apartamento.h"

#include <iostream>

using namespace std;

Apartamento::Apartamento(int numero, double area) : Acomodacao(numero) {
  this->numero = numero;
  this->area = area;
}

double Apartamento::precoBase = 0;


Apartamento::~Apartamento() {

}

double Apartamento::getArea() {
  return this->area;
}

double Apartamento::getPrecoDiaria() {
  return precoBase + (1.5 * area);
}

void Apartamento::imprimir() {
   cout << "Apartamento " << getNumero() << ": " << area << " metros quadrados - diaria custa " << this->getPrecoDiaria() << " reais" << endl;
}

double Apartamento::getPrecoBase(){
  return precoBase;
}



void Apartamento::setPrecoBase(double precoBase) {
  Apartamento::precoBase = precoBase;
}

// Implemente os métodos que faltaram!
