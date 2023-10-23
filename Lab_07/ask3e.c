#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
long factorial[15];
int i;
factorial[0]=1;
for(i=1;i<15;i++){
    factorial[i]=factorial[i-1]*i;
}
for(i=14;i>=0;i--){
    printf("%d!=%d\n",i,factorial[i]);
}
return 0;
}
