#include "Reserva.h"

#include <iostream>

using namespace std;

// IMPLEMENTAR CONSTRUTOR

Reserva::Reserva(Quarto* quarto, int inicio, int fim){
    this->quarto = quarto;
    this->inicio = inicio;
    this->fim = fim;
}


//IMPLEMENTAR O DESTRUTOR

Reserva::~Reserva(){}


Quarto *Reserva::getQuarto()
{
    return quarto;
}

int Reserva::getInicio()
{
    return inicio;
}

int Reserva::getFim()
{
    return fim;
}

double Reserva::calcularPreco()
{
    int diarias = fim - inicio;
    return (quarto->getPrecoDiaria() * diarias);
}

void Reserva::imprimir()
{
    cout << "Reserva ("<< (fim-inicio) <<" dias):" << endl;
    quarto->imprimir();
    cout << "Preco total: " << calcularPreco() << endl;
}