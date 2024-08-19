#include <iostream>

// Faca os includes necessarios

using namespace std;

class Quarto {
public:
    int numeroDoQuarto = 0;
    int numeroDePessoas = 0;
    int numeroDeCamas = 0;

    double getPrecoDiaria(){
        if(numeroDePessoas == 2){
            return (150);
        }
        return 100 * numeroDePessoas;
    };
    void imprimir(){
        cout << "Quarto " << numeroDoQuarto <<": " << numeroDePessoas << " pessoas, " << numeroDeCamas << " camas - Diaria custa " << getPrecoDiaria() << endl;
    }

};

// Implementar os metodos da classe Quarto

class Reserva {
public:
    Quarto *quarto1 = nullptr;
    Quarto *quarto2 = nullptr;
    int inicio = 0;
    int fim = 0;
    bool adicionarQuarto(Quarto *q){
        if(quarto1 == nullptr){
            quarto1 = q;
        }
        if(quarto2 == nullptr){
            quarto2 = q;
        }
        return false;

    };
    double calcularPreco(){
        return (quarto1->getPrecoDiaria() + quarto2 ->getPrecoDiaria());

    };
    void imprimir();
};


// Implementar os metodos da classe Reserva

void teste1() {
    // Implemente a funcao teste do exercicio 01 segundo o enunciado
    Quarto *quarto1 = new Quarto;
    quarto1 ->numeroDoQuarto=31;
    quarto1 ->numeroDePessoas=3;
    quarto1 ->numeroDeCamas=2;
    quarto1->imprimir();



    Quarto *quarto2 = new Quarto;
    quarto2 ->numeroDoQuarto=32;
    quarto2 ->numeroDePessoas=2;
    quarto2 ->numeroDeCamas=1;
    quarto2->imprimir();

}

void teste2() {
    // Implemente a funcao teste do exercicio 02 segundo o enunciado
}

int main() {
    teste1();
    return 0;
}
