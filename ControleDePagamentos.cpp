#include <iostream>
#include<string>
#include "Pagamento.cpp"
#include <vector>
#include <string.h>
using namespace std;

class ControleDePagamentos{
    private:
        vector<Pagamento> pagamentos;
    public:

    void setPagamentos(double p, string n){
        pagamentos.push_back( Pagamento(p,n) );
    }
    double calculaTotalDePagamentos(){
        double total = 0;
        for(int i=0;i<=pagamentos.size();i++){
            total = total + pagamentos[i].getValorPagamento();
        }
        return total;
    }
    bool existePagamentoParaFuncionario(string nomeFuncionario){
        for(int j=0;j<=pagamentos.size();j++){
            string aux= pagamentos[j].getNomeDoFuncionario();
            if(aux == nomeFuncionario){
                return true;
            }else{
                return false;
            }
        }
    }
};

int main(){

    ControleDePagamentos controle01;
    double vPagamento;
    int qnt;
    string nome,busca;
    cout<<"Quantos funcionarios voce quer cadastrar ? ";
    cin>> qnt;
    for(int i=1;i<=qnt;i++){
        cout<<"Informe o valor do pagamento do funcionario "<<i<<": ";
        cin>> vPagamento;
        cout<<"Informe o nome do funcionario "<<i<<": ";
        cin>> nome;
        controle01.setPagamentos(vPagamento,nome);
    }
    controle01.setPagamentos(9700.45,"alisson");
    cout.precision(2);
    cout<<fixed<<"Total de pagamentos: R$ "<<controle01.calculaTotalDePagamentos()<<endl;
    cout<<"Procurar funcionario: ";
    cin>>busca;
    cout.setf(ios::boolalpha);
    cout<<"Existe funcionario "<<busca<<" ? "<<controle01.existePagamentoParaFuncionario(busca);





    return 0;
}

