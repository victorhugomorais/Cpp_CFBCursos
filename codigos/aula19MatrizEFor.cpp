    #include <iostream>

    using namespace std;

    int main(){


    int i=0,j=0;
    int matriz[3][3];
    int aux=0;

    for(i=0; i<3;i++){
        for(j=0;j<3;j++){
             /*matriz[i][j] = aux; // preenche auto
            aux++;*/
            cin >> matriz[i][j]; //escolhemos os numeros   
        }
    }


    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            cout << "matriz [" << i << "][" << j << "] \n" << "vale: " << matriz[i][j] << "\n";
        }
        cout << "\n";
    }

    }