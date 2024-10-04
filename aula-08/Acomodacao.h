#ifndef ACOMODACAO_H
#define ACOMODACAO_H

// Faça as modificações necessárias

class Acomodacao
{
private:
  int numero;
public:
  Acomodacao(int numero);
  virtual ~Acomodacao();

  int getNumero();
  double getPrecoDiaria();
  void imprimir();
};
#endif