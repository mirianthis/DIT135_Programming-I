#include<stdio.h>
int main(){
int a,i;
printf("1!=1\n");
a=1;
for(i=2;i<13;i++){
        a=a*i;
        printf("%d!=%d\n",i,a);
}

return 0;
}
