#include<stdio.h>
#include<stdlib.h>
void selectionsort(int a[],int n){
int i,min=i,temp,j;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(a[j]<a[min])
    min=j;
    }
      temp=a[i];
      a[i]=min;
      min=temp;

}
}
int main(){
int a[]={2,3,4,-1,0,100,99,5,7,10,1};
int i,j;
for(i=0;i<11;i++){
    printf("%4d",a[i]);
}
printf("\n");

return 0;
}
