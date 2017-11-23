#include <bits/stdc++.h>

using namespace std;

int main(){

    int qt,pop_a,pop_b,qt_anos;
    double tx_a,tx_b;

    scanf("%d",&qt);

    for(int i=0;i<qt;i++){

        qt_anos = 0;

        scanf("%d %d %lf %lf",&pop_a,&pop_b,&tx_a,&tx_b);

        tx_a /=100;
        tx_b /=100;

        while(qt_anos <= 100 && pop_a <= pop_b){
            pop_a *= (tx_a+1);
            pop_b *= (tx_b+1);
            qt_anos++;
        }

        if(qt_anos <= 100)
            printf("%d anos.\n",qt_anos);
        else
            printf("Mais de 1 seculo.\n");

    }
}
