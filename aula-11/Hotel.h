#if !defined(HOTEL_H)
#define HOTEL_H

#include "Quarto.h"
#include "Reserva.h"
#include <vector>
#include <list>

#define QUANTIDADE_MAXIMA 10

using namespace std;

class Hotel {
private:
  vector<Quarto *> *quartos;
  int quantidadeDeQuartos;
  list<Reserva *> *reservas;
  

public:
  Hotel();
  virtual ~Hotel();

  // metodos que usam Quarto
  void adicionar(Quarto *q);
  Quarto **getQuartos();

  // metodos que usam Reserva
  void fazer(Reserva *r);
  void cancelar(Reserva *r);
  list< Reserva *> *getReservas();
  

  void imprimir();
};

#endif // HOTEL_H
