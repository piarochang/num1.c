#include <stdio.h>

int main(){
    int n, a, b, r;
    scanf("%d", &T);
    
    while(n--){
        scanf("%d %d", &a, &b);

        r=100-a-b;
        if (0<r && r<=30) printf("sad!\n");
        else if (30<r && r<=60) printf("hmm~~\n");
        else if (60<r && r<100) printf("Happyyummy\n");
        else printf("evil!!\n");
    }
    return 0;
}
