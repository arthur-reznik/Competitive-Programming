#include <bits/stdc++.h>

using namespace std;


int main(){

    int v[10];

    scanf("%d",&v[0]);
    printf("N[%d] = %d\n",0,v[0]);
    for(int i=1;i<10;i++){
        v[i] = v[i-1] * 2;
        printf("N[%d] = %d\n",i,v[i]);
    }
}
