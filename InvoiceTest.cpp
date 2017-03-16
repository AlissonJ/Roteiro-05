#include <iostream>
#include "Invoice.cpp"
using namespace std;

class InvoiceTest{
};
int main(){
    int numero;
    int quantidade;
    double preco;
    string descricao;

    cout<<"Informe o numero:"<<endl;
    cin>>numero;
    cout<<"Informe o quantidade:"<<endl;
    cin>>quantidade;
    cout<<"Informe o preco:"<<endl;
    cin>>preco;
    cout<<"Informe o descricao:"<<endl;
    cin>>descricao;

    Invoice obj(numero, quantidade, preco, descricao);

    cout<<"Fatura \n"<<"Numero: "<<obj.getNumero()<<endl;
    cout<<"Quantidade: "<<obj.getQuantidade()<<endl;
    cout<<"Preco: "<<obj.getPreco()<<endl;
    cout<<"Descricao: "<<obj.getDescricao()<<endl;
    cout<<"Total: "<<obj.getInvoiceAmount()<<endl;
    return 0;
}
