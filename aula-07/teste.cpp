#include "QuartoDeLuxo.h"
#include "Hotel.h"
#include <iostream>

void teste1() {
    QuartoDeLuxo *quartoLuxo = new QuartoDeLuxo(18, true, false);
    QuartoDeLuxo *quartoLuxo2 = new QuartoDeLuxo(19, true, true);
    QuartoDeLuxo *quartoLuxo3 = new QuartoDeLuxo(20, false, false);
    
    quartoLuxo->imprimir();
    quartoLuxo2->imprimir();
    quartoLuxo3->imprimir();
    // Implemente segundo o enunciado
}

void teste2() {
    Hotel *hotel = new Hotel(2, 2);
    int quantidade = 0;
    hotel->getQuartosDeLuxo(quantidade);
    
    Quarto *quarto = new Quarto(20, 4, 2);
    hotel->adicionarQuarto(quarto);
    hotel->getQuartosDeLuxo(quantidade);
    cout << quantidade << endl;
    
    QuartoDeLuxo *quartoLuxo = new QuartoDeLuxo(21, true, true);
    hotel->adicionarQuarto(quartoLuxo);
    hotel->getQuartosDeLuxo(quantidade);
    cout << quantidade << endl;
 

    delete hotel;
    // Implemente segundo o enunciado
}