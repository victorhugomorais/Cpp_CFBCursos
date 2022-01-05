//pode ser .h ou .cpp, mas aí tem que mudar para .cpp no nome do arquivo cabeçalho tbm
class Aviao{
//objetos são instancias das classes!

public:
    int velocidade = 0;
    int velocidadeMaxima;
    std::string tipoDeAviao;
    //abaixo tem um prototipo da função ini, que será desenvolvida fora da classe Aviao
    //void ini(int tp); dá pra fazer o construtor assim, mas é uma boa prática usar o construtor com o tipo da classe, como abaixo:
    Aviao(int tp);
    void imprimir();
private:
};

Aviao::Aviao(int tp){//1= jato, 2= monomotor, 3= planador
    if(tp==1){
        velocidadeMaxima = 800;
        tipoDeAviao = "jato";
             }
    else if(tp == 2){
        velocidadeMaxima = 500;
        tipoDeAviao = "monomotor";
                    } 
    else if (tp == 3){
        velocidadeMaxima = 250;
        tipoDeAviao = "planador";
                    }
}

void Aviao::imprimir(){
    std::cout << "Tipo: " << tipoDeAviao << std::endl;
    std::cout << "Velocidade maxima: " << velocidadeMaxima << std::endl;
    std::cout << "Velocidade atual: " << velocidade << std::endl;
    std::cout << "----------------------------------------------------------------\n";
}