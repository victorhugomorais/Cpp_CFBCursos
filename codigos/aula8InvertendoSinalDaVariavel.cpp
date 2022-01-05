#include <iostream>

using namespace std;

int main(){

int num = 10;

cout << "numero: " << num << "\n";

num*= -1;

cout << "numero invertido: " << num << "\n";

cout << "- numero : " << -num << "\n"; // dessa forma apenas muda-se nesta linha, e não na variável!

cout << "numero apos -num: " << num << "volta a ser -10 pois o -num foi apenas printado" << "\n";
// repare que continuou a ser -10 que foi alterado na operação da linha 11;

num = -num;
//agora sim, num teve o valor da variavel alterado

cout << "num = -num: " << num << "\n";// agora a inversão foi definitiva, devida a operação da linha 19;

cout << "num: " << num << "\n";

}