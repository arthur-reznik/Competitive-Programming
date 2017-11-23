#include <bits/stdc++.h>

using namespace std;

int main(){

    double x[100];
    scanf("%lf" ,&x[0]);
    printf("N[%d] = %.4lf\n",0,x[0]);
    for(int i=1;i<100;i++){
        x[i] = x[i-1]/2;
        printf("N[%d] = %.4lf\n",i,x[i]);
    }
}
