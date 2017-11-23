#include <bits/stdc++.h>

using namespace std;

int main(){

    int l;
    char op;
    double x[12][12];
    scanf("%d",&l);
    scanf(" %c",&op);
    double total=0;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&x[i][j]);
            if(i == l){
                total+=x[i][j];
            }
        }
    }

    printf("%.1lf\n", (op == 'S' ? total : total / 12));
}

