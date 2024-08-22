#include "Reserva.h"

#define MAXIMO_DE_RESERVAS 10

class Hotel {
    private:
        int quarto = 0;
        int inicio = 0;
        int fim = 0;

        Reserva* reservas[MAXIMO_DE_RESERVAS];

    bool adicionar(Reserva* reserva);

    bool estaDisponivel(int quarto, int inicio, int fim);

    Reserva* getReserva(int i);
    
    void imprimir();
};