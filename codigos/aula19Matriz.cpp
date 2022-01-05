#include <iostream>

using namespace std;

int main(){


int matriz[3][3];

int l,c;

matriz[0][0]=0;
matriz[0][1]=1;
matriz[0][2]=2;


matriz[1][0]=3;
matriz[1][1]=4;
matriz[1][2]=5;


matriz[2][0]=6;
matriz[2][1]=7;
matriz[2][2]=8;

for(l=0;l<3;l++){
    for(c=0; c<3; c++){
        cout << "matriz [" << l << "][" << c << "] \n" << "vale: " << matriz[l][c] << "\n";
    }
    cout << "\n";
}




}