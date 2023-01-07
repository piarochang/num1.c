#include <stdio.h>

int main(){
    long long int a, b;

    while(scanf("%lld", &a)!=EOF){
        scanf("%lld", &b);

        long long int n=0, num=0;
        while(n<=b){
            n+=a;
            a++;
            num++;
        }

        if (num==0) num=1;
        printf("%lld\n",num);
    }

    return 0;
}
