#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

int num = 1;
float n1, n2;

//(expressao) ? valor1 : valor 2;

string res;

cout << "digite a n1" << "\n";
cin >> n1;
cout << "digite a n2" << "\n";
cin >> n2;

float media = ((float(n1) + float(n2)) / 2);

cout << "a media eh: " << media << "\n"; 

//operador ternário aqui!
//(media >= 60) ? res="aprovado" : res="reprovado";
res = (media >= 60) ? "aprovado " : "reprovado";

cout << "situação do aluno: " << res << "\n";
}