#include <bits/stdc++.h>

using namespace std;

int main() {

   int n;
   int x;
   bool b = false;
   cin >> n;
   for(int i=0;i<n; i++){
        cin >> x;
        if(i % 2==0)
           printf("%d nao eh primo\n",x);
        else if( i < 4)
            printf("%d eh primo\n",x);
       else{
           b = false;
            for(int i=3;i<sqrt(x) && !b;i++){
                if(x % i == 0)
                    b = true;
            }
            if(b)
                printf("%d eh primo\n",x);
            else
                printf("%d nao eh primo\n",x);
       }
   }
    return 0;
}
