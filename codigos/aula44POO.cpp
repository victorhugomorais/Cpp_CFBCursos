#include <iostream>
#include <vector>

using namespace std;

class Aviao{
//objetos são instancias das classes!

public:
    int velocidade = 0;
    int velocidadeMaxima;
    string tipoDeAviao;
    //abaixo tem um prototipo da função ini, que será desenvolvida fora da classe Aviao
    void ini(int tp);

private:

};

void Aviao::ini(int tp){//1= jato, 2= monomotor, 3= planador
    if(tp==1){
        this->velocidadeMaxima = 800;
        this->tipoDeAviao = "jato";

             }
    else if(tp == 2){
        this->velocidadeMaxima = 500;
        this->tipoDeAviao = "monomotor";

                    } 
    else if (tp == 3){
        this->velocidadeMaxima = 250;
        this->tipoDeAviao = "planador";
                    }
}

int main(){
    //no C++ temos que declarar suas instâncias como ponteiros
    Aviao *aviao1 = new Aviao();
    
    aviao1->ini(3);

    cout << aviao1->velocidadeMaxima;


return 0;
}  

