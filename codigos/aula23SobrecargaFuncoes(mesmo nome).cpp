    #include <iostream>

    using namespace std;
 
    void soma();
    void soma(int n1, int n2);

    int main(){

        soma();
        soma(20,30);

        return 0;
    }

      void soma()
      {
          int n1=10,n2=20, re = n1+n2;
          cout << "soma de " << n1 << " com " << n2 << " igual a: " << re << "\n";

      }

        void soma(int n1, int n2){
          int re = n1 + n2;
            cout << "soma de " << n1 << " com " << n2 << " igual a: " << re << "\n";

        }
