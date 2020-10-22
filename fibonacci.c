#include<stdio.h>
void main()
{
	int i,n,a=0,b=1,f;
	printf("Enter the no.of terms:\n");
	scanf("%d",&n);
	printf("%d%d",a,b);
	for(i=2;i<=n;i++)
	{
		f=a+b;
		printf("%d",f);
		a=b;
		b=f;
	}
}