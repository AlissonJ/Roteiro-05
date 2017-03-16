#include <iostream>
#include<string>
#include "Pessoa.cpp"
using namespace std;

class CadastroDePessoas{
};


int main(){
    string nome;
    string telefone;
    int idade,idade01;
    Pessoa p01("Alisson");
    Pessoa p02("Carlos",21,"98810-2555");


    cout<<"Informe a idade de "<<p01.getNome()<<endl;
    cin>>idade01;
    p01.setIdade(idade01);
    cout<<"Cadastro de uma nova pessoa"<<endl;
    cout<<"Informe o nome: ";
    cin>>nome;
    cout<<"Informe o idade: ";
    cin>>idade;
    cout<<"Informe o telefone: ";
    cin>>telefone;
    Pessoa p03(nome,idade,telefone);
    cout<<"Pessoa 01: "<<p01.getNome()<<", "<<p01.getIdade()<<" anos e telefone "<<p01.getTelefone()<<endl;
    cout<<"Pessoa 02: "<<p02.getNome()<<", "<<p02.getIdade()<<" anos e telefone "<<p02.getTelefone()<<endl;
    cout<<"Pessoa 03: "<<p03.getNome()<<", "<<p03.getIdade()<<" anos e telefone "<<p03.getTelefone()<<endl;



    return 0;
}
