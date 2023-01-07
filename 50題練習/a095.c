#include <stdio.h>

int main(){
    int a, b;

    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);

        if (a==b) printf("%d\n",b);
        else printf("%d\n", b+1);
    }

    return 0;
}
