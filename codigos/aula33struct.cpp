#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){
Carro car1;

car1.nome = "Corolla";
car1.cor = "Prata";
car1.pot = 400;
car1.velMax = 200;

cout << "nome: " << car1.nome << "\n";
cout << "cor: " << car1.cor << "\n";
cout << "potencia: " << car1.pot << "\n";
cout << "vel max: " << car1.velMax << "\n";

return 0;
}