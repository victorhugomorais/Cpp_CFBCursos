#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

int val;

inicio:
cout << "selecione uma cor: \n";
cout << "1,2,3= verde \n 4,5,6= vermelho \n 7,8,9= amarelo \n";
cin >> val;

    switch(val){
        case 1: 
        case 2:
        case 3:
        cout << "verde \n";
            break;
    
        case 4:
        case 5:
        case 6:
        cout << "vermelho \n";
            break;
    
        case 7:
        case 8:
        case 9:
        cout << "amarelo \n";
        break;

        default:
        goto inicio;
        break;
    }

return 0;
}