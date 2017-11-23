#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c;
    stack<int> p;
    bool flag;
    while(true){
        scanf("%d",&n);
        if(n==0)
            break;
        flag = true;
        while(flag){
            while(!p.empty())
                p.pop();

            int j = 0;
            for(int i=0; i < n; i++){
                scanf("%d",&c);
                if(c==0){
                    flag = false;
                    break;
                }

                while(j < n && j != c){
                    if(p.size() > 0 && p.top() == c)
                        break;
                    j++;
                    p.push(j);
                }
                if(p.top() == c)
                    p.pop();
            }
            if(flag){
                if(p.empty())
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }

        printf("\n");
    }

}
