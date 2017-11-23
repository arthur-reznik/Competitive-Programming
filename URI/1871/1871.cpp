#include <bits/stdc++.h>

using namespace std;


int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(a != 0 && b != 0){
        c = a + b;
        while(c % 10 == 0){
            c = c / 10;
        }
        printf("%d\n",c);
        scanf("%d %d",&a,&b);
    }
}
