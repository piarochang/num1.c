#include <stdio.h>
#include <stdlib.h>
int n;
void sequence(int[],int);

int main()
{
    while(scanf("%d",&n)!=-1){
        int number[10];
        for(int i=0;i<n;i++){
            number[i]=n-i;
        }
        sequence(number,1);
    }
    return 0;
}


void sequence(int number[],int length){
    if(length<n){
        for(int i=length-1;i<n;i++){
            int temp;
            temp=number[i];
            for(int j=i;j>length-1;j--){
                number[j]=number[j-1];
            }
            number[length-1]=temp;
            sequence(number,length+1);
            for(int j=length-1;j<i;j++){
                number[j]=number[j+1];
            }
            number[i]=temp;
        }
    }
    else{
        for(int i=0;i<n;i++){
            printf("%d",number[i]);
        }
        printf("\n");
    }
}
