#include <bits/stdc++.h>

using namespace std;

int main(){

    char c;
    int flag = 0;
    while(scanf("%c",&c) != EOF){
        if(c != 34){
            printf("%c",c);
            continue;
        }
        else if( !flag)
            printf("``");
        else
            printf("''");
            flag = !flag;
    }
    return 0;
}
