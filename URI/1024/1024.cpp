#include <bits/stdc++.h>

using namespace std;

int main(){

    char frase[10001];
    int n;

    scanf("%d",&n);
    while(n--){
        scanf(" %[^\n]",&frase);
        for(int i=0; i < strlen(frase);i++){
            if( (frase[i] > 64 && frase[i] < 91) || ( (frase[i] > 96 && frase[i] < 123) ) ){
                    frase[i] +=3;
            }
        }

        for(int i=0; i< (strlen(frase)/2); i++){
            frase[i] = frase[i]-1;
        }

        for(int i= strlen(frase)-1; i >= 0; i--)
            cout << frase[i];

            cout << endl;
    }
}
