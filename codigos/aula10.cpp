#include <iostream>
#include <stdlib.h>//pra funfar o system ("cls");

using namespace std;

int main(){

     int n1, n2, res;
     char opc;

    inicio:
    system("cls");

     cout << "digite o valor da nota 1: " << "\n" ;
     cin >> n1;
     cout << "digite o valor da nota 2: " << "\n";
     cin >> n2;

    res =(n1 + n2)/2;

    if(res >= 60){
    cout << "aluno aprovado" << "\n";}

    else if(res>=40 and res < 60){
    cout << "aluno em recuperacao" << "\n";}

    else if(res<40){
    cout << "aluno reprovado" << "\n";}

    cout << "nota: " << res << "\n";

    cout << "digitar outras notas? " << "\n";
    cin >> opc;

    if (opc == 's' || opc== 'S' )
    goto inicio;

}