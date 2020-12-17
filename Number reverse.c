#include<stdio.h>
int main(void)
{
    long int n,p=0,i;
    scanf("%ld",&n);
    for(i=1;n!=0;i++)
    {
        p=p*10;
        p=p+(n%10);
        n=n/10;

    }
    printf("%ld",p);
    return 0;
}
