#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel=0;

    void insere(string stnome, string stcor, int stpot, int stvelMax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
    }

    void mostra(){
        cout << "nome: " << nome << "\n";
        cout << "cor: " << cor << "\n";
        cout << "potencia: " << pot << "\n";
        cout << "velocidade atual: " << vel << "\n";
        cout << "vel max: " << velMax << "\n";
        cout << "----------------------------------" << "\n";
    }

    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax){
        vel = velMax;
        }
        if(vel < 0){
            vel = 0;
        }
    }

};

int main(){
Carro car1,car2,car3;

car1.insere("Corola","Amarelo",200,350);
car2.insere("Luxo", "preto", 200, 200);

car1.mostra();
car2.mostra();

car2.mudaVel(150);
car2.mostra();

return 0;
}