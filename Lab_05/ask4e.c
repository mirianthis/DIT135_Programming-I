#include<stdio.h>
float fare(float temp){
return (9.0/5)*temp+32;
}
int main(){
float temp;
scanf("%f",&temp);
printf("F=%f",fare(temp));

return 0;
}
