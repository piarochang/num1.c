#include<stdio.h>
int main(){
    int num;
    int a,b,amount=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){   
        scanf("%d%d",&a,&b);
        for(int k=1;k<=32;k++){ 
            if(k*k < a)continue;
            if(k*k > b)break;
            amount+=k*k;
        }
        printf("Case %d: %d\n",i,amount);
    }
    return 0;
}
