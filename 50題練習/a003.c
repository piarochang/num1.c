#include<stdio.h>
int main(){
    int month,day,temp;
    scanf("%d %d",&month,&day);
    temp = (month * 2 + day) % 3;
    if(temp == 0){
        printf("普通\n");
    }else if (temp == 1){
        printf("吉\n");
    }else {
        printf("大吉\n");
    }

    return 0;
}
