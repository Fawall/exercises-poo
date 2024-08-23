#ifndef HOTEL_H
#define HOTEL_H

#define MAXIMO_DE_RESERVAS 10

#include "Reserva.h"

class Hotel {
    private:
        int quarto = 0;
        int inicio = 0;
        int fim = 0;
        int quantidade = 0;

    public:
           
        
        Reserva* reservas[MAXIMO_DE_RESERVAS];
        bool adicionar(Reserva* reserva);

        bool estaDisponivel(int quarto, int inicio, int fim);

        Reserva* getReserva(int i);
        
        void imprimir();
};
#endif