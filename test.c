#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
int array[10];
int sub[10];
int tmp;
int i;
srand((unsigned)time(NULL));
for(i=0;i<10;i++){
array[i]=rand();
sub[i]=array[i];
}

for(i=0;i<10;i++){
	for(int j=0;j<10;j++){
		if(array[i]>array[j]){
		tmp=array[i];
		array[i]=array[j];
		array[j]=tmp;
}
}
}

for(i=0;i<10;i++){
printf("%d\n",array[i]);
}
printf("\n");
for(i=0;i<10;i++){
printf("%d\n",sub[i]);
}
return 0;
}
