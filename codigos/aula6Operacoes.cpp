#include <iostream>

using namespace std;

 int n1, n2;//variaveis globais

int main(){

    int n3, n4;//variaveis locais
    int res;

    n1 = 1;
    n2 = 2;
    n3 = 3;
    n4 = 4;

//   res = n1 + n2 + n3 + n4;//res 10
//   res -= 11;//res -1
//   res = (n1 + n2) * n3; //res 9, pois somamos os n1 e n2 primeiro, e depois multiplicamos. () sobe a ordem da operação.
//   cout << "soma de todas as var: " << res; 

    int res1, res2;

     res1 = n4 / n3; //4 dividido por 3 = 1
     res2 = n4 % n3; //4 dividido por 3 tem resto 1

    cout << "divisao: " << res1 << "\n";  
    cout << "resto: " << res2 << "\n"; 
    
}