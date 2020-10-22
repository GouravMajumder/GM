#include<stdio.h>
void main()
{
	int n;
	int i=1, f=1;
	printf("Enter the number to calculate factorial:");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("The factorial of %d is:%d",n,f);
}