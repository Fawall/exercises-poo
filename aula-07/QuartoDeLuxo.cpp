// Faça os includes necessários
#include "QuartoDeLuxo.h"
#include <iostream>

using namespace std;

QuartoDeLuxo::QuartoDeLuxo(int numeroDoQuarto, bool kingSize, bool sacada) : Quarto(numeroDoQuarto, 2, 1) {
  //Implemente o construtor
  this->numeroDoQuarto = numeroDoQuarto;
  this->kingSize = kingSize;
  this->sacada = sacada;
}

QuartoDeLuxo::~QuartoDeLuxo() {

}

double QuartoDeLuxo::getPrecoDiaria() {
  if(kingSize != false && sacada != false) {
    return 300 + (75 + 150);
  }

  if(kingSize != false && sacada == false) {
    return 300 + 75;
  }
  if(kingSize == false && sacada == false){
    return 300;
  }
  else if(kingSize == false && sacada != false){
    return 300 + 150;
  }
  //Implemente o novo cálculo da diária
}

double QuartoDeLuxo::getPrecoDiaria(double desconto) {
  if(kingSize != false && sacada != false) {
    return (300 + (75 + 150)) * desconto;
  }

  if(kingSize != false && sacada == false) {
    return (300 + 75) * desconto;
  }
  if(kingSize == false && sacada == false){
    return 300 * desconto;
  }

  else if(kingSize == false && sacada != false){
    return (300 + 150) * desconto;
  }
}

void QuartoDeLuxo::imprimir() {
  cout << "Quarto de luxo " << this->getNumeroDoQuarto() << ": Diaria custa " << getPrecoDiaria() << " Reais" << endl;
  // Implemente o novo método imprimir
}