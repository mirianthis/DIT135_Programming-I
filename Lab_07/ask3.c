#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
long factorial[15];
factorial[0]=1;
printf("0!=1\n");
for(int i=1;i<15;i++){
 factorial[i]=factorial[i-1]*i;
 printf("%d!=%ld\n",i,factorial[i]);
}
return 0;
}

