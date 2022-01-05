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
Carro *carros = new Carro[3];
Carro car1,car2,car3;
carros[0] = car1;
carros[1] = car2;
carros[2] = car3;

carros[0].insere("Corola","Amarelo",200,350);
carros[1].insere("Luxo", "preto", 200, 200);
carros[2].insere("Gol", "Prata", 100, 150);

for(int i=0; i<3; i++)
carros[i].mostra();


}