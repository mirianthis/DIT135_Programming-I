#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max(int a[],int n){
int max=a[0],i;
for(i=0;i<n;i++){
    if(a[i]>max)
        max=a[i];
}
return max;
}
int main(){
int i,n,a[1000];
srand(time(NULL));
for(i=0;i<1000;i++){
  a[i]=rand()%1000;
}
printf("%d",max(a,1000));
return 0;
}
