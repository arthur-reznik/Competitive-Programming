    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int x,y;
        int maior,temp;
        unsigned int n;
        while(scanf("%d %d", &x,&y) != EOF){
            maior = 0;
            printf("%d %d ",x,y);
            if( x > y ) swap(x,y);

            for(int i = x; i <= y; i++){
                n = i;
                temp = 1;

                while(n != 1){
                    if(n % 2 == 1){
                        n = 3*n+1;
                        n = n/2;
                        temp+=2;
                    }
                    else{
                        n = n / 2;
                        temp++;
                    }
                }

                if(temp > maior){
                    maior = temp;
                }
            }

            printf("%d\n",maior);
        }
        return 0;
    }

