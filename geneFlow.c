#include <stdio.h>
#include <stdlib.h>
#include <time.h>


	char a[50];
	char b[50];
	int i;
	int j;
	int acount=0;
	int bcount=0;
	int generation=0;
	int aex=0;
	int bex=0;
    int gole;
	
int gen(){	
	
	for(i=0;i<25;i++){
		a[i]='A';
		}
	for(i;i<50;i++){
		a[i]='B';
		}
	
	for(gole=0;gole==0;gole)
	{
		acount=0;
		bcount=0;
		generation++;
	printf("generation=%d\n",generation);
		
	for(i=0;i<50;i++){
		if(a[i]=='A'){
			acount++;
		}else if(a[i]=='B'){
			bcount++;
		}
	}
	printf("A=%d,B=%d\n",acount,bcount);
	if(acount==0){
		gole=-1;
		aex++;
		}else if(bcount==0){
		gole=-1;
		bex++;
		}
		
	
	for(i=0;i<50;i++){
		b[i]=a[rand()%50];
		}
	for(i=0;i<50;i++){
		a[i]=b[i];
		}
	}
	


return aex,bex;
	}
int main(){
	srand((unsigned int)time(NULL));
	for(j;j<100;j++){
		printf("%dtimes\n",j+1);
		gen();
		generation=0;
	}
	printf("aex:%d,bex:%d\n",aex,bex);
	return 0;
}
