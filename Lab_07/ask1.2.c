#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(10);
int i;
for(i=0;i<20;i++){
    printf("%d\n",rand()%1000);

}

return 0;
}

