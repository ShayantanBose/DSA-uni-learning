#include <stdio.h>
int main(){
int x = 10;
int *p = &x;
int *q = p;
printf("%d\n",p);
printf("%d\n",q);
printf("%d\n",*q);
printf("%d\n",*p);
printf("%d\n",*(p)+2);
printf("%d\n",p+2);
int x = 10;
int *p = x;
printf("%d\n",p);
}
