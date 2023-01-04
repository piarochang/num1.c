#include<stdio.h>
int main(){
    int year;
    while(scanf("%d",&year) != EOF){
        if(year % 4 == 0 || year % 100 && year % 400 == 0){ //為4的倍數數但非100的倍數
            printf("閏年\n");
        }else{
            printf("平年\n");
        }
    }
    return 0;
}
