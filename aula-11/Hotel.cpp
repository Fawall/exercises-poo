#include "Hotel.h"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>

using namespace std;

Hotel::Hotel() {
  this->quartos = new vector<Quarto *>();
  this->quantidadeDeQuartos = 0;
  this->reservas = new list<Reserva *>();
}

Hotel::~Hotel() {
  delete this->quartos;
  
  list<Reserva *>::iterator i = reservas->begin();


  for (i; i != reservas->end(); i++) {
    delete *i;
    cout << "Reserva " << distance(reservas->begin(), i) << " deletada" << endl;
  }
  delete reservas;

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

vector<Quarto *> *Hotel::getQuartos() { return quartos; }


void Hotel::fazer(Reserva *r) {
  list<Reserva *>::iterator i = reservas->begin();

  for (i; i != reservas->end(); i++) {
    if( (*i)->getQuarto() == r->getQuarto() ){
      if( (*i)->getFim() > r->getInicio() && (*i)->getInicio() < r->getFim() ){
        throw new invalid_argument("Periodo indisponivel");
      }
    }
  }
  reservas->push_back(r);
  // this->reservas[this->quantidadeDeReservas++] = r;
}

void Hotel::cancelar(Reserva *r) {
  bool reservaEncontrada = false;
  
  list<Reserva *>::iterator i = reservas->begin();
  
  for (i; i != reservas->end(); i++) {
    if( *i == r ){
      reservaEncontrada = true;
      reservas->remove(r);
    }
  }
  
}

list<Reserva*> *Hotel::getReservas() { return this->reservas ; }


void Hotel::imprimir() {
  cout << "Hotel com " << this->quartos->size()
       << " quarto(s):" << endl;
  for (int i = 0; i < this->quantidadeDeQuartos; i++) {
    (*quartos)[i]->imprimir();
  }

  list<Reserva*>::iterator i = reservas->begin();

  cout << "e " << reservas->size() << " reserva(s):" << endl;
  for (i; i != reservas->end(); i++) {
    (*i)->imprimir();
  }
}