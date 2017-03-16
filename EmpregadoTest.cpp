#include <iostream>
#include "Empregado.cpp"
using namespace std;

class EmpregadoTest{
};
    double salarioAnual(double salario){
            double salarioAnual = salario*12;
            return salarioAnual;
        }
    double AumentoDez(double salario){
        double aumento = salario * 0.10;
        double novoSalario = salario+aumento;
        return novoSalario;
    }

int main(){
    Empregado emp01("Claudiomar", "Araujo",5.575);
    Empregado emp02("Carlos", "Alberto", 8.500);

    cout.precision(3);
    cout<<"Empregado 01"<<endl;
    cout<<fixed<<"Salario anual: R$ "<<salarioAnual(emp01.getSalario())<<endl;
    emp01.setSalario(AumentoDez(emp01.getSalario()));
    cout<<"Novo Salario Anual: R$"<<salarioAnual(emp01.getSalario())<<endl;
    cout<<"Empregado 02"<<endl;;
    cout<<fixed<<"Salario anual: R$ "<<salarioAnual(emp02.getSalario())<<endl;
    emp02.setSalario(AumentoDez(emp02.getSalario()));
    cout<<"Novo Salario Anual: R$"<<salarioAnual(emp02.getSalario());



}
