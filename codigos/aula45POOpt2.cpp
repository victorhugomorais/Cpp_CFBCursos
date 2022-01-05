#include <iostream>
#include <vector>
#include "includes/aula45.h"//pode ser .h ou .cpp, mas aí tem que mudar para .cpp no nome do arquivo cabeçalho tbm

using namespace std;

int main(){
    //no C++ temos que declara r suas instâncias como ponteiros
    Aviao *aviao1 = new Aviao(1);
    Aviao *aviao2 = new Aviao(2);
    Aviao *aviao3 = new Aviao(3);

    aviao1->imprimir();
    aviao2->imprimir();
    aviao3->imprimir();

return 0;
}  

