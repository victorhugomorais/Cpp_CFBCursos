#include <iostream>
#include <stack>

using namespace std;

//primeiro elemento a entrar = ultimo elemento a sai
//ultimo elemento a entrar = primeiro elemento a sair
/*resumo pilha
stack <string> cartas;
push();
pop();
top();
size();
empty();*/

int main(){

stack <string> cartas;



cartas.push("Rei de copas");
cartas.push("Rei de espadas");
cartas.push("Rei de ouro");
cartas.push("Rei de paus");

if( cartas.empty() )
cout << "pilha vazia" << "\n";
else
cout << "pilha com cartas" << "\n";

while(!cartas.empty())
cartas.pop();

cout << "tamanho da pilha: " << cartas.size() << "\n";

cout << "carta do topo: " << cartas.top() << "\n";

cartas.pop();
cartas.pop();


cout << "tamanho da pilha: " << cartas.size() << "\n";
cout << "carta do topo: " << cartas.top() << "\n";

}