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
    Quarto *q;

    int numeroCamas = 0;
    int numeroQuarto = 0;
    string linha;

    file.open("teste2.txt");

    if(file.fail()){
        throw new invalid_argument("Erro de leitura");
    }

    while(getline(file, linha)){
        if (linha.empty()) {
            throw new logic_error("Arquivo com formatacao inesperada");
        }
        quantidade++;
    }
    
    if(quantidade == 0){
        return nullptr;
    }
    
    quantidade = quantidade/2;
    Quarto **quartos = new Quarto*[quantidade];

    file.clear();
    file.seekg(0, ios::beg);

    for (int i = 0; i < quantidade; i++) {
        getline(file, linha);
        numeroQuarto = stoi(linha);
        getline(file, linha);
        numeroCamas = stoi(linha);

        quartos[i] = new Quarto(numeroQuarto, numeroCamas);
    }


    file.close();
    return quartos;
}
