#include <iostream>

using namespace std;

/*Faca os includes necessarios*/

string* procurarPessoa(string nomes[], int inicios[], int fins[], int quantidade, int inicio, int fim) {
    
    for(int i = 0; i < quantidade; i++)
    {
        if(inicios[i] >= inicio && fins[i] <= fim){
            return &nomes[i];
        }
    }
    
    return nullptr;
    
}

/*Comente a main para enviar*/
int main(){
    string nomes[] = {"Gabriel", "Daniel", "Carlos"};
    int inicios[] = {1, 12, 20};
    int fins[] = {5, 17, 20};
    int quantidade = 3;
    int inicio = 25;
    int fim = 30;

    string* resultado = procurarPessoa(nomes, inicios, fins, quantidade, inicio, fim);

    if (resultado != nullptr) {
        std::cout << "Nome encontrado: " << *resultado << std::endl;
    } else {
        std::cout << "Nenhuma reserva encontrada." << std::endl;
    }
    
    return 0;
}
