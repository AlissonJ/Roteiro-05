#include <iostream>
#include<string>
using namespace std;

class Empregado{
    private:
        string nome;
        string sobrenome;
        double salario;

    public:
        Empregado(string n,string sn, double sl){
            this->nome = n;
            this->sobrenome = sn;
            this->salario = sl;
        }
        string getNome(){
            return nome;
        }
        void setNome(string n){
            nome = n;
        }
        string getSobrenome(){
            return sobrenome;
        }
        void setSobrenome(string sn){
            sobrenome = sn;
        }
        double getSalario(){
            return salario;
        }
        void setSalario(double sl){
            if(sl<0){
                salario =0.0;
            }else{
            salario = sl;
            }
        }
};
