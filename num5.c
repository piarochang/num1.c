#include<stdio.h>
int main(){
    int a[4]; 
    int ans,num;
    scanf("%d",&num);  
    while(num--){ 
        for(int i=0;i<4;i++) {
            scanf("%d",&a[i]);
        }
        if((a[1]-a[0]) == (a[2]-a[1]) && (a[2]-a[1]) == (a[3]-a[2])){
            ans=a[3]+(a[3]-a[2]);
        }
        else {
            ans=a[3]*(a[3]/a[2]);
        }
        printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],ans);
    }
    return 0;
}
