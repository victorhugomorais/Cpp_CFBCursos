#include <iostream>

using namespace std;

int fat(int n);
int fib(int n);

int main(){

int val = 6;

int res = fat(val);

cout << "fatorial de: " << val << "vale: " << res << "\n";

cout << "fibonacci de: " << val << "\n";

for(int i=0; i<val;i++)
cout << fib(i+1) << " ";
}

//4*3*2*1
int fat(int n){
if(n==0)
return 1;

return n*fat(n-1);
}

int fib(int n){
if(n == 1 || n == 2)
return 1;

return fib(n-1) + fib(n-2);

}