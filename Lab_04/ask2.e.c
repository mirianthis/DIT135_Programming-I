#include<stdio.h>
int main(){
int n,i,j;
printf("dose thetiko akeraio:");
scanf("%d",&n);
while(n<0){
    printf("dose thetiko akeraio:");
    scanf("%d",&n);
}
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
         printf("%d",j);
    printf("\n");
}

return 0;
}
