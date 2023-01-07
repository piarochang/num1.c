#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x, y, z;
    double ans;

    scanf("%lf %lf %lf", &x, &y, &z);

    ans=y*y-4*x*z;
    if (ans<0) printf("No real root\n");
    else if (ans==0){ 
        ans=-y/(2*x);
        if (ans==-0) ans=-ans;
        printf("Two same roots x=%.f\n", ans);
    }
    else{
        printf("Two different roots x1=%.f , x2=%.f\n", (-y+sqrt(ans))/(2*x), (-y-sqrt(ans))/(2*x));
    }

    return 0;
}
