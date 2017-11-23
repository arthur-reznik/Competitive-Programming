#include <bits/stdc++.h>

using namespace std;

#define qt 11
int main(){

    vector<int> chamber[qt];
    double sumChamber[qt];
    int cases = 0;
    int n,m;
    int valores[qt];

    while(scanf("%d %d",&n,&m)!= EOF){
        double avg=0;
        for(int i=0;i<m;i++){
            scanf("%d",&valores[i]);
            avg+=valores[i];
        }
        for(int i=0;i<n;i++){
            chamber[i].clear();
            sumChamber[i] = 0;
        }

        avg /= n;

        sort(valores,valores+m);

        for (int i = m - 1, j = 0, k = 1; i >= 0; i--, j += k) {
			sumChamber[j] += valores[i];
			chamber[j].push_back(valores[i]);
			if (j == n - 1 && k == 1) k = 0;
			else if (j == n - 1 && k == 0) k = -1;
		}

        double resp = 0;

        for(int i=0;i<n;i++){
            resp+= fabs(sumChamber[i] - avg);
        }

        printf("Set #%d\n",++cases);
        for(int i=0; i<n;i++){
            printf("%2d:",i);
            for(int j=0;j < chamber[i].size(); j++){
                printf(" %d",chamber[i][j]);
            }
            printf("\n");
        }
        printf("IMBALANCE = %.5lf\n\n",resp);
    }
    return 0;
}
