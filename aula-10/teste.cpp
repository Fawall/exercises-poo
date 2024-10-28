#include <iostream>
#include <string>
#include <fstream>
#include "Quarto.h"
#include "PersistenciaDeQuarto.h"

using namespace std;

void teste1() {
  int quantidade = 0;
  Quarto *q1 = new Quarto(1, 4);
  Quarto *q2 = new Quarto(2, 2);
  Quarto *q3 = new Quarto(3, 3);

  PersistenciaDeQuarto *p = new PersistenciaDeQuarto("teste1.txt");

  p->inserir(q1);
  p->inserir(q2);
  p->inserir(q3);


  delete q1;
  delete q2;
  delete q3;
  delete p;

}

void teste2() {
  PersistenciaDeQuarto *p = new PersistenciaDeQuarto("teste2.txt");
 
  try{
    int quantidade = 0;
    Quarto **quartos = p->obter(quantidade);
    for(int i = 0; i < quantidade; i++){
      if(quartos[i] != nullptr){
        quartos[i]->imprimir();
      }
    }

  } catch(invalid_argument *e){
    cout << e->what() << endl;
    delete e;
  } catch(logic_error *e){
    cout << e->what() << endl;
    delete e;
  }
}

void testeJudge1(){
  PersistenciaDeQuarto *p;
  cout << "Inserir um quarto num arquivo vazio" << endl;

  Quarto *q1 = new Quarto(1, 3);
  p = new PersistenciaDeQuarto("testeJudge1.txt");
  p->inserir(q1);

  Quarto *q2 = new Quarto(2, 2);
  cout << "Inserir mais de um Quarto em arquivo vazio " << endl;
  p = new PersistenciaDeQuarto("testeJudge1-2.txt");
  p->inserir(q1);
  p->inserir(q2);

  cout << "Inserir mais de um quarto em um arquivo nao vazio" << endl;
  Quarto *q3 = new Quarto(3,3);
  Quarto *q4 = new Quarto(4,1);
  p->inserir(q3);
  p->inserir(q4);

  delete p;
  delete q1;
  delete q2;
  delete q3;
  delete q4;
}