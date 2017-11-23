#include <bits/stdc++.h>

using namespace std;

int main() {
    int r,q,a,b;
    cin >> a >> b;
    if ( a< 0)
        cout << a/b-1 << " " << b - abs((a % b))<< endl;
    else
        cout << a/b << " " << a % b << endl;


}
