#include<stdio.h>
#include<stdlib.h>
void swapint(int *a,int *b){
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
void swapdouble(double *a,double *b){
   double temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
int main(){
int a=4,b=3;
swapint(&a,&b);
printf("%d %d",a,b);

return 0;
}
