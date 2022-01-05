#include <iostream>

using namespace std;

int main(){

for(int i=1, x=1, y = 2; i<11; i++, x++, y = y + 2){
cout << "iteracao numero i: " << i << "\n";
cout << "x eh: " << x << "\n";
cout << "y eh:" << y << "\n";
}
     
return 0;
}