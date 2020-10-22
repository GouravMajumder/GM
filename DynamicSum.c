#include<stdio.h>
#include<stdlib.h>
int sum(int *a,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=*(a+i);
	}
	return sum;
}
int main(void)
{
	int n,*a,i,s;
	printf("Enter no.of array elements :\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	if(a==NULL)
		printf("Jagah nahi hai\n");
	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	s=sum(a,n);
	printf("Value of the sum is :%d\n",s);
	return 0;
}