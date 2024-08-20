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
            return (100 + 100*0.5  );
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
            quarto1= new Quarto;

            quarto1->numeroDoQuarto=q->numeroDoQuarto;  ;
            quarto1->numeroDePessoas=q->numeroDePessoas;
            quarto1->numeroDeCamas=q->numeroDeCamas;
            
            return true;
        }
        if(quarto2 == nullptr && q->numeroDoQuarto != quarto1->numeroDoQuarto){
            quarto2= new Quarto;

            quarto2->numeroDoQuarto=q->numeroDoQuarto;
            quarto2->numeroDePessoas=q->numeroDePessoas;
            quarto2->numeroDeCamas=q->numeroDeCamas;
            return true;
        }
        return false;
    };

     
    double calcularPreco(){

        int reserva = (fim - inicio);
        if(quarto1 != nullptr && quarto2 != nullptr){
            double preco = quarto1->getPrecoDiaria() * reserva + quarto2->getPrecoDiaria() * reserva;
            return preco;
        }

        if(quarto1 == nullptr && quarto2 != nullptr){
            double preco = quarto2->getPrecoDiaria() * reserva;
            return preco;
        }
        if(quarto1 != nullptr && quarto2 == nullptr){
            double preco = quarto1->getPrecoDiaria() * reserva;
            return preco;
        }
        return 0;        
        
    };

    void imprimir(){
        cout << "Reserva:" << endl;
        if(quarto1 != nullptr && quarto2 != nullptr){
            quarto1->imprimir();
            quarto2->imprimir();

            cout << "Preco total: " << calcularPreco(); 
        }

        if(quarto1 != nullptr && quarto2 == nullptr){
            quarto1->imprimir();
            cout << "Preco total: " << calcularPreco(); 
        }
    }
};
// Implementar os metodos da classe Reserva

void teste1() {
    // Implemente a funcao teste do exercicio 01 segundo o enunciado
    Quarto *quarto1 = new Quarto;
    Reserva *reservaQuarto1 = new Reserva;

    reservaQuarto1->inicio=2;
    reservaQuarto1->fim=13;

    quarto1 ->numeroDoQuarto=31;
    quarto1 ->numeroDePessoas=3;
    quarto1 ->numeroDeCamas=2;
    quarto1->imprimir();

    reservaQuarto1->adicionarQuarto(quarto1);

    Quarto *quarto2 = new Quarto;
    quarto2 ->numeroDoQuarto=32;
    quarto2 ->numeroDePessoas=2;
    quarto2 ->numeroDeCamas=1;
    quarto2->imprimir();

}

void teste2() {
    Quarto *quarto1 = new Quarto;
    Reserva *reservas = new Reserva;

    quarto1 ->numeroDoQuarto=31;
    quarto1 ->numeroDePessoas=3;
    quarto1 ->numeroDeCamas=2;
    quarto1->imprimir();

    reservas->inicio=2;
    reservas->fim=13;

    reservas->adicionarQuarto(quarto1);

    Quarto *quarto2 = new Quarto;

    quarto2->numeroDoQuarto=32;
    quarto2->numeroDePessoas=2;
    quarto2->numeroDeCamas=1;
    quarto2->imprimir();

    reservas->adicionarQuarto(quarto2);

    reservas->imprimir();
    // Implemente a funcao teste do exercicio 02 segundo o enunciado
}

int main() {
    // teste1();
    // teste2();

    return 0;
}
