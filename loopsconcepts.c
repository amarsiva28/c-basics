#include<stdio.h>
int main()
{
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	int i;
	for(i=a; i<=b; i++)
	{
		if(i%x == 0)
		printf("%d ",i);
		 }	 
}
