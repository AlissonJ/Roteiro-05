#include <iostream>
#include "Data.cpp"
using namespace std;

class DataTest{

};
int main(){
int dia;
int mes;
int ano;
cout<<"Informe o dia:"<<endl;
cin>>dia;
cout<<"Informe o mes:"<<endl;
cin>>mes;
cout<<"Informe o ano:"<<endl;
cin>>ano;
Data dataHoje(dia,mes,ano);
cout<<"Data hoje:"<<dataHoje.getDia()<<"/"<<dataHoje.getMes()<<"/"<<dataHoje.getAno()<<endl;
dataHoje.avancarDia();
cout<<"Data Amanha:"<<dataHoje.getDia()<<"/"<<dataHoje.getMes()<<"/"<<dataHoje.getAno()<<endl;



return 0;
}
