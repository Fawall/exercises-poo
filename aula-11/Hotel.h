#if !defined(HOTEL_H)
#define HOTEL_H

#include "Quarto.h"
#include "Reserva.h"
#define QUANTIDADE_MAXIMA 10

class Hotel {
private:
  Quarto **quartos;
  int quantidadeDeQuartos;
  Reserva **reservas;
  int quantidadeDeReservas;

public:
  Hotel();
  virtual ~Hotel();

  // metodos que usam Quarto
  void adicionar(Quarto *q);
  Quarto **getQuartos();
  int getQuantidadeDeQuartos();

  // metodos que usam Reserva
  void fazer(Reserva *r);
  void cancelar(Reserva *r);
  Reserva **getReservas();
  int getQuantidadeDeReservas();

  void imprimir();
};

#endif // HOTEL_H
