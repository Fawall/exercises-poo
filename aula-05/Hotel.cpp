#include "Hotel.h"
#include <iostream>

using namespace std;

// IMPLEMENTAR CONSTRUTOR

// IMPLEMENTAR DESTRUTOR

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

bool Hotel::cancelar(Reserva *r)
{
    //IMPLEMENTE
    return false;
}

