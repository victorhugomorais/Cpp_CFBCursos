#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

int val;

inicio:
cout << "selecione uma transporte: \n";
cout << "1= carro \n 2= moto \n 3= aviao \n 4= helicopteru \n";
cin >> val;

    switch(val){
        case 1: 
        case 2:
            cout << "transporte terrestre \n";
        
                switch(val){
                case 1: 
                    cout << "carro selecionado \n";
                    break;
                case 2:
                    cout << "moto terrestre \n";
                    break;}
        break;

        case 4:
        case 3:
            cout << "transporte aereo \n";
    
            switch(val){
            case 3: 
                cout << "aviao selecionado \n";
                break;
            case 4:
                cout << "helicoptero selecionado \n";
                break;}
            break;

       /* default:
        goto inicio;
        break;*/
    }

return 0;
}