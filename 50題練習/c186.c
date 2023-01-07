#include<stdio.h>
int main(){
    char name[30+1];

    while(scanf("%s", name) != EOF)
        printf("%s\n", name);

    return 0;
}
