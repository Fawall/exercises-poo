#if !defined(HOTEL_H)
#define HOTEL_H

#include "Quarto.h"
#include "Reserva.h"
#include <vector>
#define QUANTIDADE_MAXIMA 10

using namespace std;

class Hotel {
private:
  std::vector<Quarto *> *quartos;
  int quantidadeDeQuartos;
  Reserva **reservas;
  int quantidadeDeReservas;

public:
  Hotel();
  virtual ~Hotel();

  // metodos que usam Quarto
  void adicionar(Quarto *q);
  Quarto **getQuartos();

  // metodos que usam Reserva
  void fazer(Reserva *r);
  void cancelar(Reserva *r);
  Reserva **getReservas();
  int getQuantidadeDeReservas();

  void imprimir();
};

#endif // HOTEL_H
