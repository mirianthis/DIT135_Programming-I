#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int mystrcmp(const char s1[],const char s2[]){
 int i=0,j=0,a=0,b=0,c=0,d=0;
 while(s1[i]!='\0'){
    i++;
    if(s1[i]==' ')
        return -1;
        exit(1);
 }
 while(s2[j]!='\0'){
    j++;
    if(s2[i]==' ')
        return 1;
        exit(1);
 }
if(i<j)
   return -1;
if(i=j)
    return 0;
if(i>j)
   return 1;
}
int main(){
    char w1[100],w2[100];
    scanf("%s",w1);
    scanf("%s",w2);
printf("%d",mystrcmp(w1,w2));


return 0;
}
