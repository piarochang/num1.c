#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",(100+b-a)%100);
    return 0;
}
