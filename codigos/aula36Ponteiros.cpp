#include <iostream>

using namespace std;

int main(){
    string veiculo = "carro";

    string *pv;//ponteiros armazenam endereços de memoria

    pv =  &veiculo;

    cout <<  veiculo << "\n";
    cout << pv << "\n" << &veiculo << "\n";

    *pv = "moto";
    cout <<  veiculo << "\n";
}