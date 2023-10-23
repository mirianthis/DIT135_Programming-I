#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("dose thetiko akeraio:");
if(scanf("%d",&n)<=0){
    exit(1);
}
while(n>=0){
    printf("%d\n",n);
    n--;
}


return 0;
}
