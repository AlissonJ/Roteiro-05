#include <iostream>
#include<string>
#include "Despesa.cpp"
#include <vector>
using namespace std;

class ControleDeGastos{
    private:
    vector <Despesa> despesas;
    public:

    void setDespesas(double v, string t){
        despesas.push_back( Despesa(v,t) );
    }
    double calculaTotalDeDespesas(){
        double total = 0;
        for(int i=0;i<=despesas.size();i++){
            total = total + despesas[i].getValor();
        }
        return total;
    }
    bool existeDespesaDoTipo(string t){
        for(int j=0;j<=despesas.size();j++){
            string aux= despesas[j].getTipoDeGastos();
            if(aux == t){
                return true;
            }else{
                return false;
            }
        }
    }

};

int main(){

    ControleDeGastos obj;
    obj.setDespesas(275.30,"carro");
    obj.setDespesas(96.00,"comida");
    cout.precision(2);
    cout<<fixed<<"Total de despesas: R$ "<<obj.calculaTotalDeDespesas()<<endl;
    cout<<"Existe despesa de carro ?"<<endl;
    cout.setf(ios::boolalpha);
    cout<<obj.existeDespesaDoTipo("carro");

return 0;
}

