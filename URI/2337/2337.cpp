#include <bits/stdc++.h>

long long int mdc(long long int a, long long int b){

    if(a==0){
        return b;
    }

    return mdc(b%a, a);

}

long long int fib(long long int n){

  long long int f[n+1];
  long long int i;

  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++){
    f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}

int main (){

    long long int n;

    while(scanf("%lld", &n)==1){

        long long int a = fib(n+2);
        double b = pow(2,n);

        long long int m = abs(mdc(a,b));

        long long int A = a/m;
        long long int B = b/m;

    printf("%lld/%lld\n", A, B);
    }

  return 0;
}
