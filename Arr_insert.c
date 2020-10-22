#include<stdio.h>
int main(void)
{
	int n,a[10],i,item,pos;
	printf("Enter the no.of elements:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be inserted:\n");
	scanf("%d",&item);
	printf("Enter the position of insertion:\n");
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
		a[i]=a[i-1];
	a[--pos]=item;
	n++;
	printf("New array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		printf("\n***********Bye Bye,Khatam Good Bye :-)************");
}