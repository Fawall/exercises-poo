#include "Reserva.h"
#include <iostream>

using namespace std;

double Reserva::getPreco()
{
    return 100*(fim - inicio);
}

void Reserva::setQuarto(int numeroDoQuarto){
    this->quarto = numeroDoQuarto;
}

void Reserva::setInicio(int inicio){
    this->inicio = inicio;
}

void Reserva::setFim(int fim){
    this->fim = fim;
}

int Reserva::getInicio(){
    return this->inicio;
}

int Reserva::getFim(){
    return this->fim;
}

int Reserva::getQuarto(){
    return this->quarto;
}

void Reserva::imprimir()
{
    std::cout << "Reserva ("<< inicio << "-" << fim << "): Quarto " << quarto << " - " << getPreco()<< " reais" << std::endl;
}

