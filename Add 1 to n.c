#include<stdio.h>
int main(void)
{
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nThe The sum of 1 to %d is %d\n",n,add(n));
    return 0;
}
int add(int n)
{
    if(n!=0)
    {
        return n+add(n-1);
    }
    else
        return n;
}

