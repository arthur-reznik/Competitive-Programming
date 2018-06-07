#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int N,atual,ultimo,penultimo;
    while(scanf("%lld",&N) !=EOF){
        if(N == 1)
            printf("0\n");
        else if (N == 2)
            printf("1\n");
        else{
            ultimo = 0;
            penultimo = 1;
            for(int i=3; i <= N; i++){
                if(i % 2 == 0){
                    atual = ultimo * penultimo;
                    ultimo = penultimo;
                    penultimo = atual;
                }
                else{
                    atual = ultimo + penultimo;
                    ultimo = penultimo;
                    penultimo = atual;
                }
            }
            printf("%lld\n",atual);
        }
    }
}
