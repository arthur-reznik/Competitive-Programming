#include <bits/stdc++.h>

using namespace std;


int main(){
    long long int a,b;
    while( cin >> a >> b && ( a+b ) ){
        string soma = to_string(a+b);
        for(int i=0; i< soma.size(); i++){
            if(soma[i] != '0')
                cout << soma[i];
        }

        cout << endl;
    }
}
