#include<stdio.h>
void main()
{
	int l,w,a,p;
	printf("enter length and width numbers");
	scanf("%d%d",&l,&w);
	a = l*w;
	p = 2*(l+w);
	printf("area of the rectangle is %d\n", a);
	printf("perimeter of the rectangle is %d", p);
}
