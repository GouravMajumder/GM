#include<stdio.h>
int main(void)
{
	int n,a[10],i,item,k;
	printf("Enter the no.of elements:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be deleted:\n");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(item==a[i])
		{
			n=n-1;
			for(k=i;k<n;k++)
				a[k]=a[k+1];
				
		i=i-1;
		}
	}
	printf("New array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}