#include<stdio.h>
#include<stdlib.h>
int main(){

int n,i;
    printf("Give n integer:");
   if(scanf("%d",&n) !=1){
    printf("Wrong Input");
    exit(1);
    }
    if(n<0){
        printf("Wrong Input");
        exit(1);
    }
   for(i=1;i<n;i+=2)
    printf("%d\n",i);




return 0;




}
