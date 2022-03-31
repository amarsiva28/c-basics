#include<stdio.h>
int main()
{
	int n,r,product=1;
	scanf("%d",&n);//246
	while(n>1)//0>0
	{
		r=n%10;//r=2%10=2
		product=product*r;//sum=12
		n = n/10;//n=1
	}
	printf("%d", product);
}
