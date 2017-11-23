#include <bits/stdc++.h>

using namespace std;

int main(){

    int d1,h1,m1,s1;
    int d2,h2,m2,s2;
    int total1,total2,fim;
    char a[3];
    scanf("%s %d",a,&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);

    scanf("%s %d",a,&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    total1 = (d1*24 +h1) * 3600 + m1 *60 + s1;
    total2 = (d2*24 +h2) * 3600 + m2 *60 + s2;
    fim = total2 - total1;
    cout << fim / (24*3600) << " dia(s)\n";
    fim %= (24*3600);
    cout << fim / 3600 << " hora(s)\n";
    fim %= 3600;
    cout << fim / 60 << " minuto(s)\n";
    fim %=60;
    cout << fim << "segundo(s)\n";

}
