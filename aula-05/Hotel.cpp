#include "Hotel.h"
#include <iostream>


using namespace std;

// IMPLEMENTAR CONSTRUTOR

// IMPLEMENTAR DESTRUTOR
Hotel::Hotel(int maximoQuartos, int maximoReservas){
    this->maximoQuartos=maximoQuartos;
    this->maximoReservas=maximoReservas;
    

    this->quartos = new Quarto*[maximoQuartos];
    this->reservas = new Reserva*[maximoReservas];
}

Hotel::~Hotel(){
    delete[] quartos;
    delete[] reservas;
}

Quarto **Hotel::getQuartos()
{
    return quartos;
}

Reserva **Hotel::getReservas()
{
    return reservas;
}

int Hotel::getQuantidadeReservas()
{
    return quantidadeDeReservas;
}

int Hotel::getQuantidadeQuartos()
{
    return quantidadeDeQuartos;
}

bool Hotel::fazer(Reserva *r)
{
    if (quantidadeDeReservas >= maximoReservas)
    {
        return false;
    }

    reservas[quantidadeDeReservas] = r;
    quantidadeDeReservas++;
    return true;
}

bool Hotel::adicionar(Quarto *q)
{
    if (quantidadeDeQuartos >= maximoQuartos)
    {
        return false;
    }

    quartos[quantidadeDeQuartos] = q;
    quantidadeDeQuartos++;
    return true;
}

void Hotel::imprimir()
{
    cout << "=== HOTEL ===" << endl;

    cout << "Quartos:" << endl;
    for (int i = 0; i < quantidadeDeQuartos; i++)
    {
        quartos[i]->imprimir();
    }

    cout << "Reservas:" << endl;
    for (int j = 0; j < quantidadeDeReservas; j++)
    {
        reservas[j]->imprimir();
    }
}

bool Hotel::cancelar(Reserva* r) {
    int numReservas = getQuantidadeReservas();

    Reserva *aux;

    if (numReservas == 0){
        return false;
    }

    for (int i = 0; i < maximoReservas; i++) {
        if (reservas[i] == r){
            int j = i;
            while(reservas[j+1] != nullptr){
                aux = reservas[j+1];
                reservas[j] = aux;
                j++;
            } 
            reservas[j] = nullptr;
            this->quantidadeDeReservas -= 1;
            return true;
        }
    }

    return false; 
}
