#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int main(){
    int num, count=0;
    int a[10000];

    scanf("%d", &num);
    for (int i=0; i<num; i++){
        scanf("%d", &a[i]);
    }

    for (int i=0; i<num; i++){
        for (int j=0; j<num-1{-i; j++){
            if (a[j]>a[j+1])
                swap(&a[j], &a[j+1]);
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
