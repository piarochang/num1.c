#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
int main(){
    char s[7];
    scanf("%s",s);
    for(int i=1;i<strlen(s);i++){
        printf("%d",abs(s[i]-s[i-1]));
    }
    printf("\n");
    return 0;
}
