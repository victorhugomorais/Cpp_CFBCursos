    #include <iostream>


    using namespace std;

    int main()
    {
        string palavra;
        
        char letra;
        int acertou;
        string aux;
        int lim_erros=6, cont=0;


        cout << "digite a palavra a ser adivinhada \n" ;
        cin >> palavra;
        cout << palavra << "\n";
        //cout << palavra[0] << "\n";//2 - palavra[0..n] percorrendo a palavra
        

        int tam_palavra = palavra.length(); //1 - tamanho da palavra

        char segredo[tam_palavra];

        cout << "tam: " << tam_palavra << "\n";
        
        for(int i=0; i<tam_palavra;i++)
        {
            //cout << "i inicio: " << i << "\n";
            
            segredo[i] = '-';
            //cout << "iter i: " << i << "eh: " << segredo[i] << "\n";
             //cout << "i final: " << i << "\n";
        }//3 - aqui printamos os tracinhos com o numero de letras 
            
            //cout << segredo ;
           
            //cout << "antes do while, segredo: " <<  segredo << "cont: " << cont << "\n";

            while( lim_erros > 0 && cont != tam_palavra)
            {   
                //cout << "cont: " << cont << "\n";
                //cout << "lim_erros: " << lim_erros << "\n";
                acertou = 0;
                cout << "digite uma letra: " << "\n";
                //cout << segredo << "\n";
                cin >> letra;
                

                for(int i=0; i < tam_palavra; i++)
                {

                    if(palavra[i] == letra){
                    segredo[i] = letra;
                    cont = cont + 1;
                    acertou = 1;
                    }
                        
                }
                if(acertou == 0)
                --lim_erros;
                
                cout << segredo << "\n";
            }
    }
    

    /*    while( lim_erros != 0 || acertos == tam_palavra ){
            cout << "digite uma letra: " << "\n";
            cin >> letra;
            for(int i=0; i <  )
            if(palavra[i] == letra)

        }*/
          