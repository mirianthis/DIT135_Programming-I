#include<stdio.h>
int min2(int a,int b){
if(a<b)
    return a;
else{ return b;}
}
int min3(int a,int b,int c){
if(a<b && a<c)
    return a;
else if(b<a && b<c){
        return b;
}else{return c;}
}
int min4(int a,int b,int c,int d){
if(a<b && a<c && a<d)
    return a;
else if(b<a && b<c && b<d){
        return b;
}
else if(c<a && c<d && c<d){
        return c;
}else{return d;}
}
int main(){
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("%d",min4(a,b,c,d));

return 0;
}
