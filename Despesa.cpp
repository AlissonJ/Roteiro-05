#include <iostream>
#include<string>
using namespace std;

class Despesa{
    private:
        double valor;
        string tipoDeGastos;

    public:
        Despesa(double v,string t){
            this->valor =v;
            this->tipoDeGastos=t;
        }
        double getValor(){
            return valor;
        }
        void setValor(double v){
            valor = v;
        }
        string getTipoDeGastos(){
            return tipoDeGastos;
        }
        void setTipoDeGastos(string g){
            tipoDeGastos = g;
        }





};
