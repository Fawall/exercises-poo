#ifndef APARTAMENTO_H
#define APARTAMENTO_H

// Faça os includes necessários

class Apartamento
{
public:
  Apartamento(int numero, double area);
  ~Apartamento();

  // Lembre de implementar os métodos não implementados
  double getArea();
  double getPrecoDiaria();
  void imprimir();
};
#endif