#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(NULL));
int n,i,heads=0,tails=0;
printf("Give number of times:");
scanf("%d",&n);
for(i=0;i<n;i++){
    if(rand()%2==0){
        heads++;
    }else{tails++;}

}
printf("heads:%d\n",heads);
printf("tails:%d\n",tails);
return 0;
}

