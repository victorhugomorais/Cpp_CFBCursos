#include <iostream>

using namespace std;

int main(){

    int n1 = 1;

 /*
    n1 = n1 + 10; //aqui somamos 10 ao n1 (forma normal)

    cout << "incremento normal: " << n1 << "\n";  

    n1 += 10; //forma reduzida 

    cout << "incremento reduzida: " << n1 << "\n";  
*/
   
    //n1 *= 10;    n1 = n1 *10;
    //n1 /= 10;     n1 = n1 / 10;
    //n1 %= 10;     n1 = n1 % 10;

int n2 = 10;
cout << "pos fixado: " << n2++ << "\n"; //no pós fixado: ele USA o valor de n2, e após isto INCREMENTA
cout << "pre fixado: " << ++n2 << "\n"; //no pré fixado: ele INCREMENTA antes e depois USA
}