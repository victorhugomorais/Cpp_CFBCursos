#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    float pi = M_PI;
    
    printf("Valor de PI: %07.1f \n\n", pi);

    int num = 10;

    //printf("Valor do num: %07.1d \n\n", num);
    cout <<"valor de num: " <<  num << "\n" ;
    
    //hex
    cout <<"valor de num em hexadecimal : " << hex << num << "\n" ;

    //oct
    cout <<"valor de num na base oito : " << oct << num << "\n" ;

    //iomanip included
    cout <<"valor de num: " <<  setbase(16) << num << "\n" ;

    //cout.precision
    cout.precision(2);
    cout <<"valor de PI com .precision: " <<  pi << "\n" ;

    //numeros cientificos e^123
    cout <<"valor de pi: " <<  std::scientific << pi << "\n" ;

    //setw e setfill(0)
    cout <<"valor de num: " << setw(10) << setfill('7') << num << "\n" ;

return 0;
}  

