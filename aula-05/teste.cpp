#include <iostream>

#include "Hotel.h"
#include "Quarto.h"
#include "Reserva.h"

void teste1() {
    int numeroQuarto = 23;
    int numeroPessoas = 3;
    int numeroDeCamas = 2;

    Quarto *quarto = new Quarto(numeroQuarto,numeroPessoas, numeroDeCamas);
    quarto->imprimir();

    int inicio = 2;
    int fim = 8;

    Reserva *reserva = new Reserva(quarto, inicio, fim);
    reserva->imprimir();

    reserva->~Reserva();
    quarto->~Quarto();

}

void teste2() {

    Hotel *h = new Hotel(10, 20);

    Quarto *q = new Quarto(25, 4, 2);
    Quarto *q2 = new Quarto(32,2,1);
    
    Reserva *r = new Reserva(q,2, 30);
    Reserva *r2 = new Reserva(q2,10,12);
    Reserva *r3 = new Reserva(q2,8,9);

    h->adicionar(q);
    h->adicionar(q2);

    h->fazer(r);
    h->fazer(r2);
    h->fazer(r3);
    
    h->cancelar(r2);

    h->imprimir();
    h->~Hotel();


    // IMPLEMENTE seguindo o enunciado
}