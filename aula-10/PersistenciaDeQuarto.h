#if !defined(PERSISTENCIA_DE_QUARTO_H)
#define PERSISTENCIA_DE_QUARTO_H

#include "Quarto.h"
#include <iostream>
#include <string>

using namespace std;

class PersistenciaDeQuarto {
  string arquivo;
  // Faca as alteracoes necessarias

public:
  PersistenciaDeQuarto(string arquivo);
  virtual ~PersistenciaDeQuarto();
  void inserir(Quarto *q);
  Quarto **obter(int &quantidade);
};

#endif // PERSISTENCIA_DE_QUARTO_H
