

class Veiculo{
    
    public:
        int vel;
        int blindado;
        int rodas;
        void setTipo(int tp);
        void setVelMax(int vm);
        void setArma(bool ar);
        void imprimir();

    private:
        int tipo;//1= carro; 2= moto; 3 = aviao
        int velMax;
        bool arma;
};

    void Veiculo::imprimir(){
        std::cout << "Tipo do veiculo: " << tipo << std::endl;
        std::cout << "Velocidade maxima: " << velMax << std::endl;
        std::cout << "Tem arma: " << arma << std::endl;
        std::cout << "Quantidade de rodas:  " << rodas << std::endl;
        std::cout << "-------------------" << std::endl; 
    }

    void Veiculo::setTipo(int tp){
        tipo = tp;
    }
    void Veiculo::setVelMax(int vm){
        velMax = vm;
    }
    void Veiculo::setArma(bool ar){
        arma = ar;
    }

class Moto:public Veiculo{
    public: 
        Moto();
};

Moto::Moto(){
    vel = 0;
    blindado = 0;
    rodas =2;
    setArma(0);
    setTipo(2);
    setVelMax(150);
}

class Carro:public Veiculo{
    public: 
        Carro();
};

Carro::Carro(){
    vel = 0;
    blindado = 0;
    rodas =4;
    setArma(0);
    setTipo(1);
    setVelMax(200);
}

class Tanque:public Veiculo{
    public: 
    Tanque();
};

Tanque::Tanque(){
vel = 0;
blindado = 1;
rodas = 6;
setArma(1);
setTipo(3);
setVelMax(50);

}