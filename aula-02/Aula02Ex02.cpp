#include <iostream>

using namespace std;

bool obterPrimeiraDisponibilidade(int inicios[], int fins[], int quantidade,
int duracao, int dataMaxima, int* inicio, int& fim) {
  
  
  for(int i = 0; i < quantidade; i++)
  {
    if(fins[i] <= dataMaxima - duracao && inicios[i+1] >= fins[i] + duracao){
      
      
      cout << fins[i] << endl;

      inicio = &fins[i];
      fim = fins[i] + duracao;

      cout << fins[i] + duracao << endl;

      return true;
    
    }



  }
  inicio = 0;
  fim = 0;
  return false;
}


/*Comente a main para enviar*/
int main() {

  int inicios[] = {1, 10, 13};
  int fins[] = {3, 13, 15};
  int quantidade = 3;
  int duracao = 3;
  int dataMaxima = 20;

  int* inicio;
  int fim;

  bool teste;

  teste = obterPrimeiraDisponibilidade(inicios, fins, quantidade, duracao, dataMaxima, inicio, fim);

  cout << teste;

  return 0;
}
