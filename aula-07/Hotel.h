#ifndef HOTEL_H
#define HOTEL_H

#include "Reserva.h"
#include "Quarto.h"
#include "QuartoDeLuxo.h"

class Hotel {
private:
    Quarto** quartos;
    Reserva** reservas;
    
    int maximoQuartos;
    int maximoReservas;
    int quantidadeDeReservas = 0;
    int quantidadeDeQuartos = 0;
protected:
    int i = 0;

public:
    Hotel(int maximoQuartos, int maximoReservas);
    ~Hotel();

    Quarto** getQuartos();
    QuartoDeLuxo** getQuartosDeLuxo(int &quantidade);
    Reserva** getReservas();
    
    int getQuantidadeReservas();
    int getQuantidadeQuartos();

    bool adicionarQuarto(Quarto* q);
    bool fazerReserva(Reserva* r);
    bool cancelarReserva(Reserva *r);
    void imprimir();
};

#endif  // HOTEL_H
