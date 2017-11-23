#include <bits/stdc++.h>
#include <bits/boost_concept_check.h>

using namespace std;

int main(){

    int qt_ap,qt_switch,lim,seq, swt_act,pw_max,pw_act,flag;
    bool* status;
    int* pot;
    seq = 1;

    while(scanf("%d %d %d",&qt_ap,&qt_switch,&lim), qt_ap != 0){

        status = new bool[qt_ap+1]();
        pot = new int[qt_ap+1]();
        pw_act = 0;
        flag = 1;
        pw_max = 0;

        for(int i = 1; i <= qt_ap; i++){
            scanf("%d",&pot[i]);
        }

        for(int i = 1; i <= qt_switch; i++){
            scanf("%d",&swt_act);
            if(status[swt_act])
                pw_act -=pot[swt_act];
            else{
                pw_act+=pot[swt_act];

                if(pw_act > lim){
                    flag = 0;
                }
                else if(pw_act > pw_max)
                    pw_max = pw_act;
            }
            status[swt_act] = !status[swt_act];
        }

        printf("Sequence %d\n",seq);
        printf("Fuse was %s\n", (flag ? "not blown.":"blown.\n"));
        if(flag)
            printf("Maximal power consumption was %d amperes.\n\n",pw_max);
        seq++;
    }
}
