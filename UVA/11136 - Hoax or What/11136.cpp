    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        multiset<int> bilhete;
        int qt_dias, vl_compra;
        long long int total;
        int qts_no_dia;
        multiset<int>::iterator it;
        multiset<int>::reverse_iterator rit;

        cin >> qt_dias;
        while(qt_dias != 0){

            total = 0;
            bilhete.clear();
            for(int i=0; i < qt_dias;i++){
                cin >> qts_no_dia;
                for(int j=0; j < qts_no_dia;j++){
                    cin >> vl_compra;
                    bilhete.insert(vl_compra);
                }
                it = bilhete.begin();
                rit = bilhete.rbegin();
                total+=(*rit - *it);

                bilhete.erase(it);
                it = bilhete.end();
                it--;
                bilhete.erase(it);


            }
            cout << total << endl;
            cin >> qt_dias;
        }
    }
