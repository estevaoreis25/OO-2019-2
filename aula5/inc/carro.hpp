#include <iostream>
#include <string>
using namespace std;

class Carro{
    private:
        string marca;
        int ano;
        string modelo; 
        string cor;
        float preco;
        float velocidadeMax;
        float velocidadeAtual;
        int capacidade;
    public:
        Carro();
        Carro(float _velocidadeMaxima);
        ~Carro();

        string getMarca();
        void setMarca(string marca);
        
        int getAno();
        void setAno(int ano);
        
        string getModelo();
        void setModelo(string modelo);
        
        string getCor();
        void setCor(string cor);
        
        float getPreco();
        void setPreco(float preco);
        
        float getVelocidadeMaxima();
        void setVelocidadeMaxima(float velocidade);
       
        float getVelocidadeAtual();
        void setVelocidadeAtual(float velocidade);

        int getCapacidade();
        void setCapacidade(int qtePessoas);
       
        void aceleraCarro(float fatorAcelacao);
        void desaceleraCarro(float fatorAcelecao);
};