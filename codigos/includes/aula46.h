class Veiculo{


    public:
        int vel;
        int tipo;
        Veiculo(int tp);
        int getVelMax();
        bool getLigado();
        void setLigado(int l);
        void setVelMax(int velMaxAux);

    private:
        std::string nome;
        int velMax;
        bool ligado;
        //void setVelMax(int velMaxAux);
};

bool Veiculo::getLigado(){
    return ligado;
}

void Veiculo::setLigado(int l){
    if (l==0){
    ligado=0;
    }
    else if (l == 1)
    ligado = 1;
}

void Veiculo::setVelMax(int velMaxAux){
    velMax=velMaxAux;
}

int Veiculo::getVelMax(){
    return velMax;
}

Veiculo::Veiculo(int tp){
    tipo = tp;
    if(tipo == 1){
        nome = "Carro";
    }
}