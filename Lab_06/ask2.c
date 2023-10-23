#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i;
double e=0;
long para=1;
printf("Dose 1<=n<=10:");
if(scanf("%d",&n)!=1){
    printf("Wrong Input");
    exit(1);
}
if(n<1 || n>10){
    printf("Wrong Input");
    exit(1);
}
for(i=0;i<10;i++){
    if(i>0){
        para*=i;
    }
    e+=1.0/para;
    printf("With %d terms e = %f\n",i+1,e);
}




return 0;
}
