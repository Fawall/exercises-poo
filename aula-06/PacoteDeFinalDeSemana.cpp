#include "PacoteDeFinalDeSemana.h"
#include "Reserva.h"
#include <iostream>


using namespace std;


PacoteDeFinalDeSemana::PacoteDeFinalDeSemana(Quarto* quarto, int inicio, bool temCafe): Reserva(quarto,0, 2){

    this->quarto = quarto;
    this->inicio = inicio;
    this->temCafe = temCafe;
    this->diaria = fim - inicio;
    
    if(temCafe != false){
        this->cafe = true;
        this->precoTotal = precoTotal + 20;
    } 
    this->cafe = false;
    
}


PacoteDeFinalDeSemana::~PacoteDeFinalDeSemana(){}