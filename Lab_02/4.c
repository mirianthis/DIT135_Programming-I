#include<stdio.h>
#include<stdlib.h>
int main(){
int x,res;
printf("provide an integer number:\n");
res=scanf("%d",&x);
if(res!=1){
    printf("Failed to read integer\n");
    exit(1);
}
if(x%2==0){
    printf("number given is zigos!\n");
} else{
        printf("number given is monos!\n");
        }

return 0;
}
