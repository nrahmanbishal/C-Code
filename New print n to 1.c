#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    print(n);
    printf("\n",n);
    return 0;
}
void print(int n)
{
    if(n==0)
        return;
    else
        printf("%d ",n);
        print(n-1);
}

