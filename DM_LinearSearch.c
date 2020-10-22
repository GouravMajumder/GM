#include<stdio.h>
#include<stdlib.h>
int linear(int *a,int n,int item)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(item==*(a+i))
        {
            printf("The element is found in position :%d\n",i+1);
            return 1;
        }
        
    }
    return 0;
}
int main(void)
{
    int n,*a,i,item,r;
    printf("Enter the no.of elements:\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    printf("Enter the element to be searched:\n");
    scanf("%d",&item);
    r=linear(a,n,item);
    if(r==0)
    printf("!!!Element not found!!!\n");
    return 0;
}