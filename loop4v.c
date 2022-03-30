#include<stdio.h>
int main()
{
	int a,b,i,s=0;
	scanf("%d%d",&a,&b);
	for(i=a; i<=b; i++)
	{
		s = s+i;
	}
	printf("%d", s);
}
