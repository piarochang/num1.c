#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[5], b;
    
    scanf("%d", &n);

    while(n--){
        for (int i=0; i<5; i++){
            scanf("%d", &a[i]);
        }
        b=(a[2]-a[0])*60+a[3]-a[1];

        if (b<a[4]) printf("No\n");
        else printf("Yes\n");
    }

    return 0;
}
