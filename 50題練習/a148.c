#include <stdio.h>

int main(){
    double num;

    while(scanf("%lf", &num)!=EOF){
        double a=0, b;
        for(double i=0.0; i<n; i++){
            scanf("%lf", &b);
            a+=b;
        }

        if (a/num>59.0) printf("no\n");
        else printf("yes\n");
    }

    return 0;
}
