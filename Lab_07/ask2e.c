#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void coin_toss(int n){
int i,coin,heads=0,tails=0;
for(i=0;i<n;i++){
    coin=rand();
    if(coin%2==0){
    heads++;
}else {
    tails++;
}
}
printf("heads=%d\n",heads);
printf("tails=%d\n",tails);
}
int main(){
    int n,i;
printf("Give number of times:");
if(scanf("%d",&n)!=1){
    printf("Wrong Input");
    exit(1);
}
if(n<0 || n>1000){
    printf("Wrong Input");
    exit(1);
}
printf("Throwing coin %d times:\n",n);
coin_toss(n);
return 0;
}
