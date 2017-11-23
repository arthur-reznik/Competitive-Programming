#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    scanf("%d",&n);
    int x[n+10];
    int menor = 99999999,pos;

    for(int i=0; i < n; i++){
        scanf("%d",&x[i]);
        if( x[i] < menor){
            menor = x[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",pos);
}
