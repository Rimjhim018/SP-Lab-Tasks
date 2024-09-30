#include<stdio.h>

int main()
{
	int n,s,reversed=0;
	
	printf("Enter any number:");
	scanf("%d",&n);
	while(n>0)
	{
	   s=n%10;
	   reversed=reversed*10+s;
	   n=n/10;
	}
	printf("reversed:%d",reversed);
	return 0;
    }
