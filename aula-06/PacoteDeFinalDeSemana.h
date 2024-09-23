#ifndef PACOTE_FINAL_DE_SEMANA_H
#define PACOTE_FINAL_DE_SEMANA_H

// Faca os includes necessarios
#include <string>
#include "Quarto.h"
#include "Reserva.h"

using namespace std;

class PacoteDeFinalDeSemana : public Reserva{

protected:
    Quarto* quarto;
    int inicio = 0;
    int diaria = 2;
    bool temCafe;
    //Inclua aqui os atributos necessarios
public:
    PacoteDeFinalDeSemana(Quarto* quarto, int inicio, bool temCafe);
    virtual ~PacoteDeFinalDeSemana();
};
#endif

 