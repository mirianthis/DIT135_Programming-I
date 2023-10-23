#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,j,spaces,stars;
printf("Give number from 0<n<20:");
if(scanf("%d",&n)!=1){
    printf("Wrong Input");
    exit(1);
}
if(n<0 || n>20){
    printf("Wrong Input");
    exit(1);
}
for(i=0;i<n/2;i++){
     stars=2*i+1;
     spaces=(n*stars)/2;

for(j=0;j<spaces;j++)
    printf(" ");
for(j=0;j<stars;j++)
    printf("*");
printf("\n");
}


return 0;
}
