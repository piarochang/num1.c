#include <stdio.h>

int main(){
    int num;

    scanf("%d\n", &num);

    while(num--){
        int a=1;
        char c;
        while((c=getchar())!=EOF){
            if (c=='\n')    break;
            a*=c-'0';
        }
        printf("%d\n", a);
    }

    return 0;
}
