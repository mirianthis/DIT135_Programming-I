#include<stdio.h>
long power(long x,long n){
long apot=1,i;
if(x==0){
    if(n==0){
        return 1;
    }
    return 0;
}
for(i=0;i<n;i++)
    apot*=x;
    return apot;
}
int main(){
long i,j;
for(i=0;i<6;i++){
    for(j=0;j<8;j++){
        printf("%6ld",power(i,j));
    }
    printf("\n");
}


return 0;
}
