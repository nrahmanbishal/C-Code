#include<stdio.h>
int main(void)
{
    int n,i=0,a[100],k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The desired position: ");
    scanf("%d",&k);
    printf("The sum of first n values of an  array is: %d\n",arraysum(a,k-1));
    return 0;
}
int arraysum(int a[],int k)
{
    if(k<=0){
        return 0;
    }
    else
    return (arraysum(a,k)+a[k-1]);
}
