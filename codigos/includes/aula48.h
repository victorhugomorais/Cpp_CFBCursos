class Base1{
    public:
    void imprimir();
};

void Base1::imprimir(){
    std::cout << "Objeto da base 1" << std::endl;
}

class Base2{
    public:
        void imprimir2();
};

void Base2::imprimir2(){
    std::cout << "Objeto da base 2" << std::endl;
}

class CFB:public Base1, public Base2{

};