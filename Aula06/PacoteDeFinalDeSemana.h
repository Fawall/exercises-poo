#ifndef PACOTE_FINAL_DE_SEMANA_H
#define PACOTE_FINAL_DE_SEMANA_H

// Faca os includes necessarios
#include <string>
#include "Quarto.h"

using namespace std;

class PacoteDeFinalDeSemana {
private:
    //Inclua aqui os atributos necessarios
public:
    PacoteDeFinalDeSemana(Quarto* quarto, int inicio, bool temCafe);
    virtual ~PacoteDeFinalDeSemana();
};
#endif

 