#ifndef QUARTO_DE_LUXO_H
#define QUARTO_DE_LUXO_H

class QuartoDeLuxo {
  public:
    QuartoDeLuxo(int numeroDoQuarto, bool kingSize, bool sacada);
    ~QuartoDeLuxo();

    double getPrecoDiaria();
    double getPrecoDiaria(double desconto);

    void imprimir();

};

#endif
