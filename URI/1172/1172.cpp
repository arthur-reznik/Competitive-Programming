#include <bits/stdc++.h>

using namespace std;


int main(){

    int x;

    for(int i=0;i<10;i++){
        scanf("%d",&x);
        printf("X[%d] = %d\n",i, x <= 0 ? 1 : x);
    }
}
