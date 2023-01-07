#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    scanf("%s",s);
    int flag=0;
    for(int i=strlen(s)-1;i>=0;i--){
        if(s[i]!='0') flag=1;
        if(flag) printf("%c",s[i]);
    }
    if(!flag)printf("0");
    printf("\n");
    return 0;
}
