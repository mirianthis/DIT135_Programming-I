#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,j;
printf("Give number from 0<n<20:");
if(scanf("%d",&n)!=1){
    printf("Wrong Input");
    exit(1);
}
if(n<0 || n>20){
    printf("Wrong Input");
    exit(1);
}
for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        if(j==0 || i==n-1 || j==i){
            printf("*");
        }else{printf(" ");
             }
    }
    printf("\n");

}



}
