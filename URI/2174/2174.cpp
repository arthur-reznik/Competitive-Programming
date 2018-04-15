#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,qt = 151;
    string nome;
    scanf("%d",&n);
    set<string> pokemao;
    pair< set<string>::iterator,bool> it;
    while(n--){
        cin >> nome;
        if(pokemao.insert(nome).second == true)
            qt--;
    }

    printf("Falta(m) %d pomekon(s).\n",qt);
}
