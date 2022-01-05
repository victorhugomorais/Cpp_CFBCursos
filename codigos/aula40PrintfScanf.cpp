#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

   // printf("hello world \n ") ;

   // cout << "hello world" << endl;

   // printf("canal do professor bruno aqui nem aparece");

    int num = 123, num2 = 456, num3 = 789;
    char nome[10] = "victor";
    printf("Valor da variavel: %d\n Nome: %s \n\n", num,nome);

    cout << "digite um numero e um nome: " << "\n";
    scanf("%d %s",&num3, &nome);

    printf("Numero digitado: %d \n %s\n",num3,nome);

    system("pause");

return 0;
}  

