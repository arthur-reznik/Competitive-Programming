#include <stdlib.h>
#include <stdio.h>

int main(){
    int i, j;

    int qtdAtributos;
    int nm, nl;
    int bm[110][110];
    int bl[110][110];
    int escolham, escolhal;
    int atributo;

    while(scanf("%d", &qtdAtributos) != EOF){

        scanf("%d %d", &nm, &nl);

        for (i = 1; i <= nm; i++){
            for (j = 1; j <= qtdAtributos; j++)
                scanf("%d", &bm[i][j]);
        }

        for (i = 1; i <= nl; i++){
            for (j = 1; j <= qtdAtributos; j++)
                scanf("%d", &bl[i][j]);
        }

        scanf("%d %d", &escolham, &escolhal);

        scanf("%d", &atributo);

        if (bm[escolham][atributo] == bl[escolhal][atributo])
            printf("Empate\n");
        else if (bm[escolham][atributo] > bl[escolhal][atributo])
            printf("Marcos\n");
        else
            printf("Leonardo\n");

    }

    return 0;

}
