#include <iostream>
#include<string>
using namespace std;

class Pagamento{
    private:
        double valorPagamento;
        string nomeDoFuncionario;
    public:
        Pagamento(double v, string n){
            this->valorPagamento = v;
            this->nomeDoFuncionario = n;
        }
        double getValorPagamento(){
            return valorPagamento;
        }
        void setValorPagamento(double v){
            valorPagamento = v;
        }
        string getNomeDoFuncionario(){
            return nomeDoFuncionario;
        }
        void setNomeDoFuncionario(string nome){
            nomeDoFuncionario = nome;
        }
};
