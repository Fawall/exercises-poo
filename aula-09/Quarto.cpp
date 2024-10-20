// Faca os includes necessarios
#include "Quarto.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Quarto::Quarto(int numeroDoQuarto, int numeroDeCamas) {
  if(numeroDoQuarto <= 0)
    throw invalid_argument("Numero do quarto invalido");
  if(numeroDeCamas <= 0)
    throw invalid_argument("Numero de camas invalido");

}
    

Quarto::~Quarto() {}

double Quarto::precoBase = 100.0;

double Quarto::getPrecoDiaria(int numeroDePessoas) {
  // Altere conforme o enunciado
  return precoBase * numeroDePessoas;
}

void Quarto::imprimir() {
  cout << "Quarto " << numeroDoQuarto << " - " << numeroDeCamas << " camas"
       << endl;
}
