#include <bits/stdc++.h>

using namespace std;

struct card{
    char rank_;
    char suit;

    card(){};

    card(char* s){
        rank_ = s[0];
        suit = s[1];
    }
};

bool match(card a, card b){
    return (a.rank_ == b.rank_ || a.suit == b.suit);
}

int main(){
    vector< vector< card > > pilha;
    char v[4];
    while(scanf("%s",&v)){
        if(v[0] =='#'){
            break;
        }

        pilha.clear();
        pilha.push_back(vector<card>(1,card(v)));
        int n =0;
        for(int i=2; i <= 52; i++){
            scanf(" %s ",&v);
            pilha.push_back(vector<card>(1,card(v)));
            n++;
            bool move;
            do{
                move = false;
                for(int i=0;i <=n && !move ;i++){
                    if(i >= 3 && match(pilha[i-3].back(),pilha[i].back())){
                        pilha[i-3].push_back(pilha[i].back());
                    }
                    else if(i>=1 && match(pilha[i-1].back(),pilha[i].back())){
                        pilha[i-1].push_back(pilha[i].back());
                    }
                    else
                        continue;
                    pilha[i].pop_back();
                    if(pilha[i].size()==0){
                        pilha.erase(pilha.begin()+i);
                        n--;
                    }
                    move = true;
                }
            }while(move);
        }
        printf("%d pile", n+1);
        if (n+1!=1)
            printf("s");
        printf(" remaining:");
        for(int i=0;i<=n;i++)
            printf(" %d", pilha[i].size());
        printf("\n");

    }
}
