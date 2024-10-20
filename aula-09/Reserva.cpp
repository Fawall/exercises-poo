// Faca os includes necessarios
#include "Reserva.h"
#include <iostream>

using namespace std;

Reserva::Reserva(Quarto *quarto, int inicio, int fim, int numeroDePessoas) {
  // Altere conforme o enunciado
}

Reserva::~Reserva() {}

int Reserva::getInicio() { return inicio; }

int Reserva::getFim() { return fim; }

int Reserva::getNumeroDePessoas() { return numeroDePessoas; }

Quarto* Reserva::getQuarto() { return quarto; }

double Reserva::getPreco() { return preco; }

void Reserva::imprimir() {
  cout << "Reserva de inicio " << inicio << ", fim " << fim << " e preco "
       << preco << endl;
}
