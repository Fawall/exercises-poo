#include "PersistenciaDeQuarto.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>


using namespace std;
// Implemente
PersistenciaDeQuarto::PersistenciaDeQuarto(string arquivo) {
    this->arquivo = arquivo;
}

PersistenciaDeQuarto::~PersistenciaDeQuarto() {
}

// Implemente
void PersistenciaDeQuarto::inserir(Quarto *q) {
    ofstream file;
    
    file.open(this->arquivo, ios::app);
    file << q->getNumero() << endl;
    file << q->getNumeroDeCamas() << endl;

    file.close();

}

// Implemente
Quarto **PersistenciaDeQuarto::obter(int &quantidade) {
    ifstream file;
    string linha;
    file.open("teste2.txt");

    if(file.fail()){
        throw new invalid_argument("Erro de leitura");
    }

    while(getline(file, linha)){
        
        if (linha.empty()) {
            throw logic_error("Arquivo com formatacao inesperada");
        }

        cout << linha << endl;
        quantidade++;
    }
    
    if(quantidade == 0)
        return nullptr;


    return nullptr;
}
