    #include <iostream>

    using namespace std;

    void imprime(string txt="argumento padrao caso nao haja parametro na chamada da funcao");
    //argumentos padrao sao colocados no prototipo da função, caso haja outros parametros, tais parametros serão priorizados.


    int main(){

        imprime("bruno");
        imprime();

        return 0;
    }

    void imprime(string txt){
        cout << "\n" << txt << "\n";
    }