#ifndef Reserva_H
#define Reserva_H

#include "Quarto.h"

class Reserva {
protected:
    Quarto *quarto = nullptr;
    int inicio = 0;
    int fim = 0;
    int precoTotal = 0;
    bool cafe = false;

public:
    Reserva(Quarto* quarto, int inicio, int fim);
    virtual ~Reserva();
    
    Quarto* getQuarto();
    int getInicio();
    int getFim();
    double calcularPreco();
    bool temCafe();
    void imprimir();
};

#endif  // Reserva_H
