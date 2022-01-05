#include <iostream>
#include <vector>
#include "includes/aula48.h"

using namespace std;

int main(){
    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();
    CFB *obj3 = new CFB();

    obj1->imprimir();
    obj2->imprimir2();

    obj3->imprimir();
    obj3->imprimir2();

return 0;
}  

