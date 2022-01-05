#include <iostream>

using namespace std;

int main(){

int n=0;

    while(n++<10){
        cout << n << "\n";
        //n++; flag de parada já no parametro do while
        //cout << "digite valores para n (fim do loop = 10)";
        if(n == 5)
        break;//quebra o programa antes de chegar no 10 do parametro inicial do while
    }

    cout << "fim da rotina";

return 0;
}