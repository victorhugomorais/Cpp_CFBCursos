#include <iostream>

using namespace std;

int main(){

enum armas{m4=30, usp=12};//estrutura armas

armas armaSel; //variavel armaSel do tipo da estrutura armas

armaSel = m4;
cout << armaSel << "\n";

armaSel = usp;
cout << armaSel;



}