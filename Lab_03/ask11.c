#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,c,min;
printf("dose 3 akeraious:");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c)
    printf("%d",a);
if(c<b && c<a)
    printf("%d",c);
if(b<a && b<c)
    printf("%d",b);
return 0;
}
