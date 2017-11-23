#include <bits/stdc++.h>

using namespace std;

int main(){
    int du, dd, hu, hd, mu, md, su, sd, sdo, sdt, hdo, hdt, mdo, mdt, tso, tst, tdo, tdd, T, d, h, m, s;

    scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d",&du, &hu, &mu, &su, &dd, &hd, &md, &sd);

    sdo = du*86400;
    sdt = dd*86400;

    hdo = hu*3600;
    hdt = hd*3600;

    mdo = mu*60;
    mdt = md*60;

    tso = su;
    tst = sd;

    tdo = sdo+hdo+mdo+tso;
    tdd = sdt+hdt+mdt+tst;

    T = tdd-tdo;

    d = T/86400;
    T = T%86400;
    h = T/3600;
    T = T%3600;
    m = T/60;
    s = T%60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d, h, m, s);

return 0;

}
