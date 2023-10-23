#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int i,counter[100]={ 0 };
printf("element   value\n");
srand(time(NULL));
for(i=0;i<1000000;i++){
    rand()%100;
        counter[rand()%100]+=1;
}
for(i=0;i<100;i++){
    printf("%d          %d\n",i,counter[i]);
}
return 0;
}
