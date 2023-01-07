#include <stdio.h>
#include <stdlib.h>
int main()
{
	int hour,min,after,just,after1,hour1;
	scanf("%d%d",&hour,&min);
	after=min+150;
	after1=after%60;
	just=after/60;
	hour1=hour+just;
	if(hour1>24)
	{
		hour1=hour1%24;
		if(after1<10)
		{
			printf("0%d:0%d",hour1,after1);
		}
		else
		{
			printf("0%d:%d",hour1,after1);
		}
		
	}
	else if(hour1==24)
	{
		
		if(after1<10)
		{	
			printf("00:0%d",after1);
		}
		else	
		{
			printf("00:%d",after1);
		}
	}
	else
	{
		if(after1<10)
		{
			printf("%d:0%d",hour1,after1);
		}
		else
		{
			printf("%d:%d",hour1,after1);
		}
	}

}
