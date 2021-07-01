#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct blood{
    char allele[2];
}a[100],b[100];
int i,j,r;
int generation;
int Acount;
int Bcount;
int Ocount;
int ABcount;



int main(void){
    srand((unsigned int)time(NULL));
    for(i=0;i<100;i++){
        for(j=0;j<2;j++){
            r=rand()%10;
            if(r<3){
                a[i].allele[j]='A';
            }else if(r<5){
                a[i].allele[j]='B';
            }else{
                a[i].allele[j]='O';
            }
        }
    }
    
        
    for(generation=1;generation<101;generation++){
        Acount=0;
        Bcount=0;
        Ocount=0;
        ABcount=0;
        
        
        
        for(i=0;i<100;i++){
            j=0;
                if(a[i].allele[j]=='A'){
                    if(a[i].allele[j+1]=='B'){
                        ABcount++;
                    }else{
                        Acount++;
                    }
                }else if(a[i].allele[j]=='B'){
                    if(a[i].allele[j+1]=='A'){
                        ABcount++;
                    }else{
                        Bcount++;
                    }
                }else{
                    if(a[i].allele[j+1]=='O'){
                        Ocount++;
                    }else if(a[i].allele[j+1]=='A'){
                        Acount++;
                    }else if(a[i].allele[j+1]=='B'){
                        Bcount++;
                    }
                }
        }
        printf("generation=%d\nA=%d,B=%d,O=%d,AB=%d\n",generation,Acount,Bcount,Ocount,ABcount);
        
        for(i=0;i<100;i++){
            for(j=0;j<2;j++){
                b[i].allele[j]=a[rand()%100].allele[rand()%2];
            }
        }
        
        for(i=0;i<100;i++){
            for(j=0;j<2;j++){
                a[i].allele[j]=b[i].allele[j];
            }
        }
        
    }   
    
    
    
    
    
}
