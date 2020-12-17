#include<stdio.h>
int main(void)
{
    int a[100],n,i=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    r=sum(a,n-1);
    printf("The sum is %d.\n",r);
}
int sum(int *a, int n)
{
    if(n==0)
        return a[0];
    else
        return a[n]+sum(a, n-1);
}
