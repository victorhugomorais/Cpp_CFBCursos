    #include <iostream>

    using namespace std;

    int soma(int a,int b);
    void tr(string vet[2]);


    int main(){
        int n1, n2;

        cout << "digite 2 numeros para serem somados: " << "\n";
        cin >> n1;
        cin >> n2;
       
        //soma(n1,n2);
        cout << "soma: " << soma(n1,n2) << "\n";

        int res = soma(n1,n2);
        cout << "soma2: " << res << "\n";

        string transp[2] = {"car","moto"};
        tr(transp);

        return 0;

    }

        int soma(int a, int b){
        int aux = (a + b);
            return aux;
        }

        void tr(string vet[1]){
            for(int i=0; i <2;i++){
            cout << vet[i] << "\n";
            }
        }

        