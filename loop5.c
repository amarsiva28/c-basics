#include<stdio.h>
int main()
{
	int x,a,b,count=0;
	scanf("%d%d%d",&x,&a,&b);
	int i;
	for(i=a; i<=b; i++)
	{
		if(i%x == 0)
		{
			count++;
		}
	}
	printf("%d", count);
}

