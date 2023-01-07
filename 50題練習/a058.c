#include <stdio.h>

int main(){
    int x, y;
    int a=0, b=0, c=0;

    scanf("%d", &y);

    while(x--){
        scanf("%d", &y);
        if (y%3==0) a++;
        else if (y%3==1) b++;
        else c++;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}
