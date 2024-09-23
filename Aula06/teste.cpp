#include <iostream>
#include "Quarto.h"
#include "Reserva.h"
#include "Hotel.h"
#include "PacoteDeFinalDeSemana.h"

void teste1() {
    Quarto* quarto = new Quarto(25,3,2);
    Reserva* reserva = new Reserva(quarto, 2, 4);

    PacoteDeFinalDeSemana* pacote = new PacoteDeFinalDeSemana(quarto, 5, true);

    reserva ->imprimir();
    pacote->imprimir();
  
    
}

void teste2() {
    
    Quarto* quarto = new Quarto(25,3,2);
    Reserva* reserva = new Reserva(quarto, 2, 4);
    PacoteDeFinalDeSemana* pacote = new PacoteDeFinalDeSemana(quarto, 5, true);
    reserva ->imprimir();
    pacote->imprimir();

    Hotel *hotel = new Hotel(10);
    hotel->fazer(reserva);
    hotel->fazer(pacote);

    Quarto* quarto2 = new Quarto(32,4,2);
    PacoteDeFinalDeSemana* pacote2 = new PacoteDeFinalDeSemana(quarto2, 7, true);
    
    hotel->fazer(pacote2);
    hotel->imprimir();

    reserva->~Reserva();
    quarto->~Quarto();
    quarto2->~Quarto();
    hotel->~Hotel();    
}




