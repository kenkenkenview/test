#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[4];
    int i;
    int j;
    int k;
    int times=0;
    int temp;

    srand((unsigned)time(NULL));
    for(i=0;i<4;i++){
        array[i]=rand();
        printf("%d\n",array[i]);
    }

    do{
        times++;
        k=0;
        printf("%dtimes\n",times);
        for(i=0;i<4;i++){
            j=rand()%4;
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        for(i=0;i<4;i++){
            printf("%d\n",array[i]);
        }
        for(i=0;i<3;i++){
            if(array[i]<array[i+1]){
                k++;
            }
        }

    }while(k<3);
    printf("clear");




}


