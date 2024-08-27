#include "Hotel.h"
#include "Reserva.h"
#include <iostream>

using namespace std;

bool Hotel::adicionar(Reserva *reserva)
{
    if (this->quantidade >= MAXIMO_DE_RESERVAS)
    {
        return false;
    }

    if (this->quantidade == 0)
    {

        this->reservas[0] = reserva;
        quantidade += 1;
        return true;
    }

    for (int i = 0; i < quantidade; i++)
    {
        if (estaDisponivel(reserva->getQuarto(), reserva->getInicio(), reserva->getFim() == true))
        {

            this->reservas[this->quantidade] = new Reserva();
            this->reservas[this->quantidade] = reserva;

            quantidade += 1;

            return true;
        }


    }
    return false;
}

bool Hotel::estaDisponivel(int quarto, int inicio, int fim)
{


    for (int i = 0; i < this->quantidade; i++)
    {

        int inicioReserva = reservas[i]->getInicio();
        int fimReserva = reservas[i]->getFim();

        if(reservas[i]->getQuarto() != quarto){
            return true;
        }


        if(reservas[i]->getQuarto() == quarto){

        // Verifica se está tentando adicionar reseva repetida
            for(int j = 0; j < this->quantidade; j++){

                if(reservas[j]->getInicio() == inicio && reservas[j]->getFim())
                    return false;
            }
            

            int inicioReserva = reservas[i]->getInicio();
            int fimReserva = reservas[i]->getFim();

            if(inicio >= fimReserva || fim >= inicioReserva){
                return true;
            }

        }
    }
    return false;

}

Reserva *Hotel::getReserva(int i)
{
    return this->reservas[i];
}

void Hotel::imprimir()
{
    std::cout << "Hotel com " << this->quantidade << " reservas" << endl;
    for (int i = 0; i < this->quantidade; i++)
    {
        std::cout << "Reserva (" << reservas[i]->getInicio() << "-" << reservas[i]->getFim() << "): Quarto " << reservas[i]->getQuarto() << " - " << reservas[i]->getPreco() << std::endl;
    }
}
