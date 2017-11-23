#include <bits/stdc++.h>

using namespace std;

int main() {
    char p1[10];
    char p2[10];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf(" %s %s",p1,p2);
        if(strcmp(p1,p2) == 0){
            printf("empate\n",i+1);
        }
        else{
            if(strcmp(p1,"papel") == 0){

                if(strcmp(p2,"pedra") == 0){
                    printf("rajesh\n",i+1);

                }else if(strcmp(p2,"tesoura") == 0){
                    printf("sheldon\n",i+1);

                }else if(strcmp(p2,"spock") == 0){
                    printf("rajesh\n",i+1);

                }
                else{
                    printf("sheldon\n",i+1);
                }
            }
            else if(strcmp(p1,"pedra") == 0){

                if(strcmp(p2,"papel") == 0){
                    printf("sheldon\n",i+1);

                }else if(strcmp(p2,"tesoura") == 0){
                    printf("rajesh\n",i+1);

                }else if(strcmp(p2,"spock") == 0){
                    printf("sheldon\n",i+1);
                }
                else{
                    printf("rajesh\n",i+1);
                }
            }
            else if(strcmp(p1,"tesoura") == 0){

                if(strcmp(p2,"papel") == 0){
                    printf("rajesh\n",i+1);

                }else if(strcmp(p2,"pedra") == 0){
                    printf("sheldon\n",i+1);

                }else if(strcmp(p2,"spock") == 0){
                    printf("sheldon\n",i+1);
                }
                else{
                    printf("rajesh\n",i+1);
                }
            }
            else if(strcmp(p1,"lagarto") == 0){

                if(strcmp(p2,"papel") == 0){
                    printf("rajesh\n",i+1);

                }else if(strcmp(p2,"tesoura") == 0){
                    printf("sheldon\n",i+1);

                }else if(strcmp(p2,"spock") == 0){
                    printf("rajesh\n",i+1);
                }
                else
                    printf("sheldon\n",i+1);
            }
            else{
                if(strcmp(p2,"papel") == 0){
                    printf("sheldon\n",i+1);

                }else if(strcmp(p2,"tesoura") == 0){
                    printf("rajesh\n",i+1);

                }else if(strcmp(p2,"lagarto") == 0){
                    printf("sheldon\n",i+1);
                }
                else{
                    printf("rajesh\n",i+1);
                }
            }
        }
    }

    return 0;
}
