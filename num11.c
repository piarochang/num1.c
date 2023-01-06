#include<stdio.h>
int main()
{
    int num,a=0,b=0;
    scanf("%d",&num);
    int amt[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&amt[i]);
        a++;
        b=b+a*amt[i];
    }
    printf("%d",b);
    return 0;
}
