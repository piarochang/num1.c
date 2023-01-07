#include<stdio.h>
int main(){
    int i;
    scanf("%d", &i);
    for(int k = 1; k <= i; k++){
        for(int j = 1; j <= i - k; j++){
            printf("_");
        }
        for(int j = 1; j <= k; j++){
        printf("*");
        }
    printf("\n");
    }
}
