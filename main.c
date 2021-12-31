#include <stdio.h>

int main(void) {
int x;
int y;
scanf("%d",&x);
scanf("%d",&y);



int *pt1;
pt1=&x;
int *pt2;
pt2=&y;
printf("Before swap\n");
printf("a=%d b=%d\n",x,y);


int temp;
temp = *pt1;
x=*pt2;

y=temp;

printf("After swap\n");
printf("a=%d b=%d\n",x,y);




}