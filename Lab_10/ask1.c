#include<stdio.h>
#include<stdlib.h>
int main(){
double a=5.6;
int b=18;
char c[100]="ime kathigitis";

printf("%p %lf\n",&a,a);
printf("%p %d\n",&b,b);
printf("%p %s\n",&c,c);
return 0;
}
