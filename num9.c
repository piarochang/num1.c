#include<stdio.h>
int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        if(num == 0) break;
        for(int i = 0;i < num;i++){
            if(i%7){
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}
