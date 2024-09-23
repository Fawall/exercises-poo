#include "PacoteDeFinalDeSemana.h"
#include <iostream>


using namespace std;


PacoteDeFinalDeSemana::PacoteDeFinalDeSemana(Quarto* quarto, int inicio, bool temCafe): Reserva(){

    this->quarto = quarto;
    this->inicio = inicio;
    this->temCafe = temCafe;
    
    if(temCafe != false){
        this->cafe = true;
        this->precoTotal = (100 + 20) * 2;
    } 
    else{
        this->cafe = false;
        this->precoTotal = 100 * 2;
    }

}

void PacoteDeFinalDeSemana::imprimir(){
    cout << "Reserva (" << this->diaria << " dias):" << endl;
    quarto->imprimir();
    cout << "Preco total: " << this->precoTotal << endl;
}

PacoteDeFinalDeSemana::~PacoteDeFinalDeSemana(){}