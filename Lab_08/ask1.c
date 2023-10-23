#include<stdio.h>
#include<stdlib.h>
#include<time.h>
float avg(int a[],int n){
    int i,sum=0;
    float avera;
for(int i=0;i<n;i++){
    sum+=a[i];
}
return avera=sum/n;

}
int main(){
int a[1000],i;
srand(time(NULL));
for(i=0;i<1000;i++){
    a[i]=rand();
}
printf("%f",avg(a,1000));

return 0;
}
