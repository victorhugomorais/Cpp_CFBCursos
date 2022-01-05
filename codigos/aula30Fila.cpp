#include <iostream>
#include <queue>

using namespace std;
/*
empty
size
pop
push
back
front
*/

int main(){

queue <string> cartas;

cartas.push("Rei de copas");
cartas.push("Rei de espadas");
cartas.push("Rei de ouro");
cartas.push("Rei de paus");

cout << "tamanho da fila: " << cartas.size() << "\n";
cout << "primeira carta da fila: " << cartas.front() << "\n";
cout << "ultima carta da fila: " << cartas.back() << "\n";


/*if( cartas.empty() )
cout << "pilha vazia" << "\n";
else
cout << "pilha com cartas" << "\n";
*/

while(!cartas.empty()){
cout << "primeira carta: " << cartas.front() << "\n";
cartas.pop();
}
//cout << "tamanho da pilha: " << cartas.size() << "\n";



//cartas.pop();
//cartas.pop();


//cout << "tamanho da pilha: " << cartas.size() << "\n";
//cout << "carta do topo: " << cartas.top() << "\n";


}