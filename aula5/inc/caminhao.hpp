#ifndef CAMINHAO_H_
#define CAMINHAO_H_
#include "carro.hpp"


class Caminhao : public Carro{
    private:
        float carga;
        float comprimento;
        float altura;
        string tipoCarga;
    
    public:
        Caminhao(string marca);
        Caminhao(float _velocidadeMaxima, string marca);
     //    ~Caminhao();
        float getCarga();
        void setCarga(float carga);

        float getComprimento();
        void setComprimento(float comprimento);
        
        float getAltura();
        void setAltura(float altura);
        
        string getTipoCarga();
        void setTipoCarga(string tcarga);

};

#endif