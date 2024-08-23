#include <iostream>

#include "Reserva.h"
#include "Hotel.h"
#include "teste.h"

using namespace std;

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
    Hotel *hotel = new Hotel();

    Reserva *t1 = new Reserva();
    Reserva *t2 = new Reserva();

    t1->setInicio(1);
    t1->setFim(8);
    t1->setQuarto(22);

    t2->setInicio(5);
    t2->setFim(9);
    t2->setQuarto(22);

    hotel->adicionar(t1);
    hotel ->adicionar(t2);


    hotel->imprimir();
    t1->imprimir();
    t2->imprimir();



    // IMPLEMENTE seguindo o enunciado
}
