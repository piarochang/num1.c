#include<stdio.h>
#include<stdlib.h>  
int cmp(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}
int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        int a[1005];
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        qsort(a,N,sizeof(a[0]),cmp);
        for(int i=0;i<N;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
