#include <iostream>
#include <vector>
#include "includes/aula46.h"

using namespace std;

int main(){
    //no C++ temos que declara r suas instâncias como ponteiros
    Veiculo *v1 = new Veiculo(1);
    Veiculo *v2 = new Veiculo(1);
    v1->setLigado(1);
    v2->setLigado(0);
    //v1->setVelMax();

    v1->setVelMax(100);
    v2->setVelMax(150);

    cout << "velocidade maxima de v1" << v1->getVelMax() << endl;
    cout << "velocidade maxima de v2" << v2->getVelMax() << endl;
    
    if (v1->getLigado()){
        cout << "veículo está ligado" << endl;
    }else{
        cout << "veículo está desligado" << endl;
    }

     if (v2->getLigado()){
        cout << "veículo está ligado" << endl;
    }else{
        cout << "veículo está desligado" << endl;
    }



return 0;
}  

