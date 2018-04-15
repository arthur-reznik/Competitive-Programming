#include <bits/stdc++.h>

using namespace std;


int main(){

    char frase[10];
    int first =0, caw =0,soma=0, atual = 0;
    int n = 0;

    while(n < 3){
        scanf(" %[^\n]",frase);
        if( strlen(frase) > 3){
            printf("%d\n",soma);
            soma = 0;
            n++;
            continue;
        }

        for(int i=0;i < 3; i++){
            if(frase[i] == '*'){
                atual++;
                first = 1;
            }
            if(first && i < 2)
                atual = atual << 1;
        }
        soma +=atual;
        first = 0;
        atual = 0;
    }
}
