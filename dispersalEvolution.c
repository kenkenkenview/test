#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    srand((unsigned int)time(NULL));

    int i;
    int j;
    long double sum;
    int gen;
    int r;
    long double count;

    struct patch{
        long double parent;
        long double offspring[1000];
        int nO;
        bool Occupied;
    } p[100];

    for(i=0;i<100;i++){
        p[i].parent=(long double)rand()/RAND_MAX;
        p[i].Occupied=true;
        p[i].nO=0;
    }

    for(gen=0;gen<500;gen++){
        count = 0.0;
        sum = 0.0;
        for(i=0;i<100;i++){
            p[i].nO=0;
            if(p[i].Occupied==true){
                sum += p[i].parent;
                count++;
            }
        }
        if(count!=0.00000000){
        printf("%dst generation's average is %Lf\n",gen+1,sum/count);
        }
        for(i=0;i<100;i++){
            if((long double)rand()/RAND_MAX<p[i].parent){
                for(j=0;j<4;j++){
                   if(rand()%10<1){
                       r=rand()%100;
                       p[r].offspring[p[r].nO]=p[i].parent;
                       p[r].nO++;

                   }
                }
            }else{
                for(j=0;j<4;j++){
                p[i].offspring[p[i].nO] = p[i].parent;
                p[i].nO++;
                }
            }
        }

        for(i=0;i<100;i++){
            if(p[i].nO==0){
                p[i].Occupied=false;
            }else{
                p[i].parent=p[i].offspring[rand()%p[i].nO];
            }
        }


    }


    return 0;

}

