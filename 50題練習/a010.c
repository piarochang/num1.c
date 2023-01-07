#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b=2, c=0;

    scanf("%d", &a);

    while(1){
        if (a%b==0){
            a/=b;
            c++;
            continue;
        }
        else if (c>0){
            printf("%d", b);
            if (c>1) printf("^%d", c);
            if (a>1) printf(" * ");
            if (a==1) break;
            n=0;
        }
        b++;
    }

    return 0;
}
