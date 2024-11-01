#include "Hotel.h"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

using namespace std;

Hotel::Hotel() {
  this->quartos = new vector<Quarto *>();

  this->quantidadeDeQuartos = 0;
  this->reservas = new Reserva *[QUANTIDADE_MAXIMA];
  this->quantidadeDeReservas = 0;
}

Hotel::~Hotel() {
  delete this->quartos;

  for (int i = 0; i < this->quantidadeDeReservas; i++) {
    delete this->reservas[i];
    cout << "Reserva " << i << " deletada" << endl;
  }
  delete[] this->reservas;

  cout << "Hotel deletado" << endl;
}

void Hotel::adicionar(Quarto *q) {
  if (quartos->size() == QUANTIDADE_MAXIMA) {
    throw new overflow_error("Quantidade maxima de quartos atingida");
  }

  for (int i = 0; i < quartos->size(); i++) {
    if (this->quartos->at(i) == q) {
      throw new invalid_argument("Quarto ja adicionado");
    }
  }
  quantidadeDeQuartos++;
  this->quartos->push_back(q);
}

Quarto **Hotel::getQuartos() { return quartos->data(); }


void Hotel::fazer(Reserva *r) {
  if (this->quantidadeDeReservas == QUANTIDADE_MAXIMA) {
    throw new overflow_error("Quantidade maxima de reservas atingida");
  }

  for (int i = 0; i < this->quantidadeDeReservas; i++) {
    if (this->reservas[i]->getQuarto() == r->getQuarto()) {
      if (this->reservas[i]->getFim() > r->getInicio() &&
          this->reservas[i]->getInicio() < r->getFim()) {
        throw new invalid_argument("Periodo indisponivel");
      }
    }
  }

  this->reservas[this->quantidadeDeReservas++] = r;
}

void Hotel::cancelar(Reserva *r) {
  bool reservaEncontrada = false;

  for (int i = 0; i < this->quantidadeDeReservas; i++) {
    if (this->reservas[i] == r) {
      reservaEncontrada = true;
      this->quantidadeDeReservas--;
    }

    if (reservaEncontrada) {
      this->reservas[i] = this->reservas[i + 1];
    }
  }
}

Reserva **Hotel::getReservas() { return this->reservas; }

int Hotel::getQuantidadeDeReservas() { return this->quantidadeDeReservas; }

void Hotel::imprimir() {
  cout << "Hotel com " << this->quartos->size()
       << " quarto(s):" << endl;
  for (int i = 0; i < this->quantidadeDeQuartos; i++) {
    (*quartos)[i]->imprimir();
  }

  cout << "e " << this->getQuantidadeDeReservas() << " reserva(s):" << endl;
  for (int i = 0; i < this->quantidadeDeReservas; i++) {
    this->reservas[i]->imprimir();
  }
}