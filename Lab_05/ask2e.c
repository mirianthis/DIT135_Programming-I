#include<stdio.h>
int main(){
int i,j,n;
printf("Give 0<n<20 number:");
if(scanf("%d",&n)!=1){
    printf("Wrong Input");
    exit(1);
}
if(n>20 || n<0){
    printf("Wrong Input");
    exit(1);
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j==0 || i==n-1 || j==i)
            printf("*");
      else{printf(" ");}

    }
printf("\n");
}
return 0;
}
