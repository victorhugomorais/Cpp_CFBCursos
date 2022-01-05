#include <iostream>

using namespace std;

int main(){

int vetor[10];
//int vetor1,vetor2...vetor10;

int aux=10;

for(int i = 1; i<11;i++){
vetor[i] = aux;

cout << "vetor: [" << i << "] " << "vale: " << aux << "\n";

aux += 10;
}

return 0;
}