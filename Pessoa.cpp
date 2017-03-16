#include <iostream>
#include<string>
using namespace std;

class Pessoa{

    private:
       string nome;
       int idade;
       string telefone;
    public:
        Pessoa(string n){
            this->nome = n;
        }
        Pessoa(string n,int i, string t){
            this->nome = n;
            this->idade = i;
            this->telefone = t;
        }
        string getNome(){
            return nome;
        }
        void setNome(string n){
            nome =n;
        }
        string getTelefone(){
            if(telefone.empty()){
                return "nao cadastrado";
            }
            return telefone;
        }
        void setTelefone(string t){
            telefone = t;
        }
        int getIdade(){
            return idade;
        }
        void setIdade(int i){
            idade = i;
        }






};
