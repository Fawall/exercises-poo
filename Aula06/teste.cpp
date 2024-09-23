#include <iostream>
#include "Quarto.h"
#include "Reserva.h"
#include "PacoteDeFinalDeSemana.h"

void teste1() {
    Quarto* quarto = new Quarto(25,3,2);
    Reserva* reserva = new Reserva(quarto, 2, 4);

    PacoteDeFinalDeSemana* pacote = new PacoteDeFinalDeSemana(quarto, 5, true);

    reserva ->imprimir();
    pacote->imprimir();
  
    
}

void teste2() {
}

