#include<stdio.h>
#include<stdlib.h>
int min2(int a,int b){
if(a>b){
   return b;
}else{
    return a;}
}
int min3(int a,int b,int c){
    if(min2(a,b)>c){
        return c;
    }else return min2(a,b);
}
int min4(int a,int b,int c,int d){
    if(min3(a,b,c)>d){
        return d;
    }else return min3(a,b,c);
}
int min5(int a,int b,int c,int d,int e){
    if(min4(a,b,c,d)>e){
        return e;
    }else return min4(a,b,c,d);
}

int main(){
    int a,b,c,d,e;
    printf("Dose 5 akeraious:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("%d",min5(a,b,c,d,e));



return 0;
}
