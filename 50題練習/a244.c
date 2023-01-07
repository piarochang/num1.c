#include<stdio.h>
int main(){
    int a,b,c,line;
    scanf("%d",&line);
    while(line--){
        scanf("%d %d %d",&a,&b,&c);
        if(a == 1){  
            printf("%d",b+c);}
        else if(a == 2){
            printf("%d",b-c);}
        else if(a == 3){
            printf("%d",b*c);}
        else if(a == 4){
            printf("%d",b/c);}    
    }
    return 0;
}
