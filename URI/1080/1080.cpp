#include <bits/stdc++.h>

using namespace std;

int main(){

    int maior = 0;
    int pos = 1;

    int x;
    for(int i=1;i <= 100;i++){
        scanf("%d",&x);
        if(x > maior){
            maior = x;
            pos = i;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",pos);



}
