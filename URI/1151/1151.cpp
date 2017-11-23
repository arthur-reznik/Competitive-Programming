#include <bits/stdc++.h>

using namespace std;

int main(){

    int a=0,b=1,c = 1,n,atual = 3;

    scanf("%d",&n);
    printf("%d %d %d ",a,b,c);
    while(atual < n){
        a = b;
        b = c;
        c = a+b;
        if(atual != n-1)
            printf("%d ",c);
        else
            printf("%d",c);
        atual++;
    }
    printf("\n");
}
