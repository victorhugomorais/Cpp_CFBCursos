#include <iostream>
#include <list>

using namespace std;

int main(){
//list <int> aula(5,50);//5 posições //vale 50 cada posição
list <int> aula;
list<int>::iterator it;

int tam = 4;
//push_back(valor) insere no final da lista
//push_front(valor) insere no inicio da lista

for(int i=0; i<tam;i++){
aula.push_front(i); //push_back adiciona por atrás e push_front adiciona pela frente 
cout << aula.front() << "\n\n";
}

cout << "tamanho da lista: " << aula.size() << "\n";

//inserindo em qualquer parte da lista
/*it = aula.begin();
advance(it,2);
aula.insert(it, 99);
*/

aula.sort(); //ordena a lista
aula.reverse();//inverte a ordem da lista 0..10 para 10..0

tam = aula.size();
for(int i=0; i<tam;i++){
cout << "lista aula pos: " << i << " vale: " << aula.front() << "\n";
aula.pop_front();
}


}