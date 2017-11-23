#include <bits/stdc++.h>

using namespace std;

int main(){

    int g=0,a=0,d=0,op;
    do{
        cin >> op;
        if(op==1)
            a++;
        else if(op==2)
            g++;
        else if(op==3)
            d++;

    }while(op != 4);

    cout <<"MUITO OBRIGADO\n" <<"Alcool: "<< a <<"\nGasolina: " << g <<"\nDiesel: " << d <<"\n";

}
