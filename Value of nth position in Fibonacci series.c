#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nThe value of no:%d positioned fibonacci is %d\n",n,fib(n));
    return 0;
}
int fib(int n)
{
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    else
        return fib(n-1)+fib(n-2);
}
