#include <iostream>

using namespace std;

//void contador (int num);

void contador (int num, int cont=0);

int main(){
contador(20);
}

/*void contador (int num){
for (int i =0 ; i<num; i++)
cout << i << "\n";
}*/

void contador (int num, int cont){
//não necessuta de looping
cout << cont << "\n";
if(num > cont)
    contador(num,++cont);
}