#include <iostream>

using namespace std;

class Data{
private:
    int dia;
    int mes;
    int ano;
public:
    void setDia(int d){     //Dia
        dia = d;
    }
    int getDia(){
        return dia;
    }
    void setMes(int m){     //Mes
        mes = m;
    }
    int getMes(){
        return mes;
    }
    void setAno(int a){     //Ano
        ano = a;
    }
    int getAno(){
        return ano;
    }
    Data(int d,int m,int a){
       this->dia = d;
       this->mes = m;
       this->ano = a;
       while(dia<1 || dia>31){
           cout<< "Informe um dia valido (entre 1 e 31)"<<endl;
           cin>>dia;
       }while(mes<1 || mes>12){
           cout<< "Informe um mes valido (entre 1 e 12)"<<endl;
           cin>>mes;
       }while(ano<1900 || ano>3500){
           cout<< "Informe um ano valido (entre 1900 e 3500)"<<endl;
           cin>>ano;
       }

    }
    void avancarDia(){
        dia++;
    }


};
