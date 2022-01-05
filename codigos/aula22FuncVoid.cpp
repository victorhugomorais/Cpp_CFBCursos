    #include <iostream>

    using namespace std;

    void text();
    void soma(int a, int b);

    int main(){
    //text();
    //soma(1,2);
    

       /* for(int i = 0; i < 10; i++){
           cout << "iter i de numero: " << i << "\n";
           text();
         } */

        int n1, n2;

         soma(1,2);
            
    return 0;
    }


   void text(){
       cout << "prof bruno" << "\n";
   }

   void soma(int a, int b){
       int aux = a + b;
       cout << "soma: " << aux << "\n";

   }