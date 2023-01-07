#include <stdio.h>

int main(){
    int num;

    while(scanf("%d", &num)!=EOF){
        printf("%d\n", 1+num+num*(num+1)*(num-1)/6);
    }

    return 0;
}
