#include <stdio.h>
#include <stdlib.h>

int main(void){
int i;
int j;
int temp;
int a[10];
int b[10];
int min;

srand((unsigned)time(NULL));
for(i=0;i<10;i++){
    a[i]=rand();
    printf("%d\n",a[i]);
}
printf("\n");
for(i=0;i<10;i++){
    min=i;
    for(j=i+1;j<10;j++){
        if(a[j]<a[min]){
            min=j;
        }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    printf("%d\n",a[i]);
}



}
