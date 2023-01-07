#include <stdio.h>

int main(){
    int num;

    while(scanf("%d", &num)!=EOF){
        printf("%d\n", num*num-num+2);
    }

    return 0;
}
