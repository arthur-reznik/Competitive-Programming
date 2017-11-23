#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    scanf("%d\n",&n);
    stack<char> p;
    string linha;
    bool flag;
    for(int i=0;i < n ;i++){
        getline(cin,linha);
        flag = true;
        for(int j = 0; j < linha.size() && flag; j++){
            if(linha[j] == '(' || linha[j] == '['){
                p.push(linha[j]);
            }
            else{
                if( !p.empty() && ((linha[j] == ')' && p.top() == '(' ) || (linha[j] == ']' && p.top() == '[')) ){
                    p.pop();
                }
                else{
                    flag = false;
                }
            }
        }

        if(!p.empty())
            flag = false;

        while(!p.empty())
            p.pop();

        printf("%s\n",flag ? "Yes" : "No");
    }
}
