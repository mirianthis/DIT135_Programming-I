#include<stdio.h>
#include<stdlib.h>
int main(){
int i,n,value;
    value=1;
    printf("0!=%d\n",value);
        for(i=1;i<=12;i++){
            value*=i;
            printf("%d\n",value);
        }



return 0;
}
