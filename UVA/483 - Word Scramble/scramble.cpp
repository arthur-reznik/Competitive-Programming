#include <bits/stdc++.h>

using namespace std;

int main(){
    string linha;
    while(getline(cin,linha)) {
        string pal;
        int tam = linha.size();
        int cont;
        for(int i=0; i < tam; i++){
            cont = 0;
            if(linha[i] == ' ')
                cout << linha[i];
            else{
                while(linha[i+cont] != ' ' && i+cont < tam ){
                    cont++;
                }
                for(int j = i+cont -1 ; j >= i && j < tam; j--){
                    cout << linha[j];
                }
                i+=cont-1;
            }
        }
        cout<< endl;
    }
}


