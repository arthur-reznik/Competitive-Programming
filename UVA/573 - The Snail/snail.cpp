#include <bits/stdc++.h>

using namespace std;

int main(){

    int height;
    double height_atual;
    double climb;
    int slide;
    double stamina;
    int dia;
    scanf("%d %lf %d %lf",&height,&climb,&slide,&stamina);

    while(height > 0){
        height_atual = 0;
        stamina = climb * (stamina / 100.0);
        dia = 0;
        while(height_atual >= 0 && height > height_atual ){
            height_atual += climb;
            climb -= stamina;
            if(climb < 0)
                climb = 0;

            if(height_atual <= height){
                height_atual-=slide;
            }
            dia++;
        }
        //printf("%lf %lf %d\n",height_atual,climb,slide);
        printf("%s on day %d\n", height_atual >  0 ? "success" : "failure", dia);

        scanf("%d %lf %d %lf",&height,&climb,&slide,&stamina);
    }

}
