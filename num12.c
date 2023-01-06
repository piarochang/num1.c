#include<stdio.h>
int main(){

    int num;
    while(scanf("%d",&num)!=EOF)
    {    
        int a=0,b=0,c=1;
        for(int i=0;i<num;i++)
        {
            a=a+c+b;
            c=0,b++;
        }
        printf("%d\n",a);
    }

}
