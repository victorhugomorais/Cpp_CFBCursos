#include <iostream>

using namespace std;

int main(){
int tam = 10;
int vetor[tam];
//int vetor1,vetor2...vetor10;

int aux=10;

//cout << "sizeof(vetor)" << sizeof(vetor) << "\n";

for(int i = 0; i < (sizeof(vetor)/sizeof(vetor[0])) ;i++){
vetor[i] = aux;

cout << "vetor: [" << i << "] " << "vale: " << aux << "\n";

aux += 10;
}

return 0;
}