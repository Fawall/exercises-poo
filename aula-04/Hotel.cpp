#include "Hotel.h"
#include "Reserva.h"
#include <iostream>

using namespace std;

bool Hotel::adicionar(Reserva *reserva){
    if(this->quantidade >= MAXIMO_DE_RESERVAS){
        return false;
    }

    if(this->quantidade == 0){
        this->reservas[0] = reserva;
        quantidade += 1;
        return true;
    }

    for(int i = 0; i < quantidade; i++){
        if(this->reservas[i]->getQuarto() != reserva->getQuarto()){
            this->reservas[this->quantidade] = new Reserva();
            this->reservas[this->quantidade] = reserva;

            quantidade += 1;

            return true;
        }
        return false;        
        
    }


}

bool Hotel::estaDisponivel(int quarto, int inicio, int fim){
    
    for(int i = 0; i < this->quantidade; i++){
        cout << reservas[0]->getQuarto();
        if(reservas[i]->getQuarto() != quarto){

            int inicioReserva = reservas[i]->getInicio();
            int fimReserva = reservas[i]->getFim();

            if (!(fim <= inicioReserva || inicio >= fimReserva)) {
                return true;
            }

        }
    }
    return false;
}

Reserva* Hotel::getReserva(int i){
    return this->reservas[i];
}



void Hotel::imprimir(){
    std::cout << "Hotel com " << quantidade << " reservas" << endl;

}

