// Faca os includes necessarios
#include "Quarto.h"
#include <iostream>

using namespace std;

Quarto::Quarto(int numeroDoQuarto, int numeroDeCamas) {
  // Altere conforme o enunciado
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
