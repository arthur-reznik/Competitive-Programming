 #include <bits/stdc++.h>

 using namespace std;


 int main(){


    int x = 9;
    //for(int i=0; i<x/2; i++)
  //      cout << i << " ";
    //for(int i=x/2; i < x;i++)
    //    cout << i << " ";
    //cout << endl;
    for(int i=0; i<x; i++){
        if( i < x/2)
            cout << i << " ";
        else
            cout << x << ' ';
        if(i == x/2)
            cout << endl;

    }
 }
