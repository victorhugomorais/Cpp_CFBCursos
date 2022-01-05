class Carro{

public:
    Carro(int tp);
    int ano;
    string marca;
    string cor;
    int velecidadeMaxima;
    int getVelocidadeMaxima();

private:
    int velocidade;
    bool ligado;
    int vel;

//propriedades publicas podem ser alteradas pelo objeto
//já propriedade privadas precisaremos de um métodos para altera-los ou acessa-los
};

int Carro::getVelocidadeMaxima(){
return velecidadeMaxima;

}

Carro::Carro(int tp){
    tipo = tp;
    if

}