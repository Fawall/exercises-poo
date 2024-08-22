class Reserva
{
private:
    int quarto;
    int inicio = 0;
    int fim = 0;

public:
    void setQuarto(int numeroDoQuarto);
    void setInicio(int inicio);
    void setFim(int fim);
    
    int getInicio();
    int getFim();
    int getQuarto();
    double getPreco();
    
    void imprimir();
};
