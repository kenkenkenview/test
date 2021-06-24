#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
int no;
char name[20];
}student;

int main() {

int i;
int j;
student temp;




printf_s("before\n");
student a[5];

strcpy_s(a[0].name,20, "Takashi");
strcpy_s(a[1].name, 20,"Shimizu" );
strcpy_s(a[2].name, 20,"Zepperin");
strcpy_s(a[3].name, 20,"Numano" );
strcpy_s(a[4].name, 20,"Noda" );

srand((unsigned)time(NULL));


for (i = 0; i < 5; i++) {
a[i].no=rand()%100;
printf_s("name:%s no:%d\n",a[i].name,a[i].no);
};

printf_s("after\n");

for (i = 0; i < 5; i++) {
for (j = i + 1; j < 5; j++) {
if (a[i].no > a[j].no) {
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
printf_s("name:%s no:%d\n", a[i].name, a[i].no);
}




return 0;
}
