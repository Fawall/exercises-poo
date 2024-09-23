#include "Hotel.h"

#include <iostream>

Hotel::Hotel(int maximoReservas)
{
    this->maximoReservas = maximoReservas;
    reservas = new Reserva *[maximoReservas];
}

Hotel::~Hotel(){};

Reserva **Hotel::getReservas()
{
    return reservas;
}

int Hotel::getQuantidadeReservas()
{
    return quantidadeDeReservas;
}


bool Hotel::fazer(Reserva *r)
{
    bool verifica = estaDisponivel(r->getQuarto(), r->getInicio(), r->getFim());
    
    if(verifica == false){
        return false;
    }

    if (quantidadeDeReservas >= maximoReservas)
    {
        return false;
    }

    reservas[quantidadeDeReservas] = r;
    quantidadeDeReservas++;
    return true;
}

void Hotel::imprimir()
{
    cout << "=== HOTEL ===" << endl;

    cout << "Reservas:" << endl;
    for (int j = 0; j < quantidadeDeReservas; j++)
    {
        reservas[j]->imprimir();
    }
}

bool Hotel::estaDisponivel(Quarto *q, int inicio, int fim)
{
    for (int i = 0; i < quantidadeDeReservas; i++)
    {
        if (reservas[i]->getQuarto() == q)
        {
            int reservaInicio = reservas[i]->getInicio();
            int reservaFim = reservas[i]->getFim();
            if (!(fim <= reservaInicio || inicio >= reservaFim))
            {
                return false;
            }
        }
    }
    return true;
}
