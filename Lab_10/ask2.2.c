#include<stdio.h>
#include<stdlib.h>
void minmax(int a[],int n,int *max,int *min){
int i,mini=a[0],maxi=a[0];
for(i=0;i<n;i++){
    if(a[i]<mini)
        mini=a[i];
    if(a[i]>maxi)
        maxi=a[i];
}
if(min)
  *min=mini;
if(max)
  *max=maxi;
}
int main(){
int a[10],i,min,max;
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
    minmax(a,10,&min,&max);
printf("%d %d",min,max);

return 0;
}
