#include<stdio.h>
#include<stdlib.h>
int binary(int *a,int l,int h,int item)
{
    int mid;
    if(l>h)
    return -1;
    else
    {
        mid=(l+h)/2;
        if(item==*(a+mid))
        return mid;
        else if(item<*(a+mid))
        return binary(a,l,mid-1,item);
        else
        return binary(a,mid+1,h,item);
    }
}
int main(void)
{
    int n,*a,i,item,r,l,h;
    printf("Enter the no.of elements:\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    l=0;
    h=n-1;
    printf("Enter the element to be searched:\n");
    scanf("%d",&item);
    r=binary(a,l,h,item);
    if(r>=0)
    printf("Element found at %d position",r+1);
    else
    printf("!!!Element not found!!!\n");
    return 0;
}