#include <iostream>

#include "Hotel.h"
#include "Quarto.h"

void teste1() {
    int numeroQuarto = 32;
    int numeroPessoas = 3;
    int numeroDeCamas = 2;

    Quarto *quarto = new Quarto(numeroQuarto,numeroPessoas, numeroDeCamas);
    quarto->imprimir();

    int inicio = 2;
    int fim = 8;

    Reserva *reserva = new Reserva(quarto, inicio, fim);
    reserva->imprimir();

    reserva->~Reserva();
    // IMPLEMENTE seguindo o enunciado
}

void teste2() {
    // IMPLEMENTE seguindo o enunciado
}