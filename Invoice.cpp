#include <iostream>
#include<string>
using namespace std;

class Invoice{
    private:
        int numero;
        int quantidade;
        double preco;
        string descricao;
    public:
        Invoice(int n,int q,double p,string d){
            this->numero = n;
            this->quantidade = q;
            this->preco = p;
            this->descricao = d;
        }
        double getInvoiceAmount(){
            if(quantidade<0){
                quantidade =0;
            }else if(preco<0.0){
                preco = 0.0;
            }
            int amount = quantidade * preco;
            return amount;
        }


        int getNumero(){
            return numero;
        }
        void setNumero(int n){
            numero = n;
        }
        int getQuantidade(){
            return quantidade;
        }
        void setQuantidade(int q){
            quantidade = q;
        }
        double getPreco(){
            return preco;
        }
        void setPreco(double p){
            preco = p;
        }
        string getDescricao(){
            return descricao;
        }
        void setDescricao(string s){
            descricao = s;
        }











};
