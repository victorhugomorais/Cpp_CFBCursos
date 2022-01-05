#include <iostream>
#include <vector>

using namespace std;

int main(){
 
    vector<int> num;
    vector<int> num2;
    int tam, i;

    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);

    num2.push_back(50);
    num2.push_back(60);
    num2.push_back(70);
    num2.push_back(80);
    //swap troca o vector primeiro pelo vector parametro
    //num.swap(num2);

    

    num.insert(num.begin(),888);
    num.erase(num.begin());
    tam = num.size();

    cout << "primeiro elemento de num: " << num.front() << endl;
    cout << "ultimo elemento de num: " << num.back() << endl;
    cout << "elemento do meio do vector num: " << num.at(tam/2) << endl;
    


    tam = num.size();

    cout << "tamanho do vector: " << tam << endl;
    
    for(i=0;i<tam;i++){
        cout << "vetor da casa " << i+1 << " vale: " << num[i] << "\n";
    }
    
    cout << " ";

    for(i=0;i<num2.size();i++){
        cout << "vetor da casa " << i+1 << " vale: " << num2[i] << "\n";
    }

    while(!num.empty()){
        num.pop_back();
    }

    cout << "pos pops back temos tam de num: " << num.size() << endl;
    
    num2.clear();
    cout << "pos .clear() temos tam de num 2: " << num.size() << endl;
return 0;
}  

