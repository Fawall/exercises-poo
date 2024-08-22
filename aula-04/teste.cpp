#include <iostream>
#include "Reserva.h"
#include "teste.h"

void teste1() {
    // IMPLEMENTE seguindo o enunciado
    Reserva *reserva1 = new Reserva();

    int quarto = 31;
    int inicio = 1;
    int fim = 6;

    reserva1->setQuarto(quarto);
    reserva1->setInicio(inicio);
    reserva1->setFim(fim);

    reserva1->imprimir();

}

void teste2() {
    // IMPLEMENTE seguindo o enunciado
}
