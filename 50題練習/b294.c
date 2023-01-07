#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int a, ans=0;

    scanf("%d", &num);

    for (int i=1; i<=num; i++){
        scanf("%d", &a);
        ans+=t*i;
    }

    printf("%d\n", ans);

    return 0;
}
