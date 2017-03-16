#include <iostream>
#include<string>
#include "Despesa.cpp"
#include <vector>
#include <string.h>
using namespace std;

class ControleDeGastos{
    private:
    vector<Despesa> despesas;
    public:

    void setDespesas(double v, string t){

    }
    double calculaTotalDeDespesas(){    //valor total das despesas do sistema
        double total =0;
        for(int i=0;i<=despesas.size();i++){
            total = total + despesas[i].getValor();
        }
        return total;
    }
    bool existeDespesaDoTipo(string t){
        int aux=0;
        for(int j=0;j<=despesas.size();j++){
            string aux02= despesas[j].getTipoDeGastos();
            if(aux02 == t){   //aux02.compare(t)
                return true;
                break;
            }
        }return false;

    }

};
