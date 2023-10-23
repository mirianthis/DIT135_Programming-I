#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,j;
printf("dose n:");
scanf("%d",&n);
if(n>20 || n<0){
    printf("Wrong Input");
    exit(1);
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if(j==n-1|| i==n-1 ||j==0 ||i==0 )
      printf("*");

    else {printf(" ");}
  }
    printf("\n");
}


return 0;
}

