#include<stdio.h>
#include<stdlib.h>
int main(){
int i,n,j;
    printf("Give n:");
    if((scanf("%d",&n)) !=1){
        printf("Wrong Input");
        exit(1);
    }
    while(n<=0){
        printf("Give n:");
        scanf("%d",&n);
    }
    for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
       printf("%d",j);
    }
    printf("\n");
    }



return 0;
}
