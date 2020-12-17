#include<stdio.h>
int main(void)
{
    int n,p=0,c=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        p=n%10;
        c=c+p*p*p;
        n=n/10;
    }
    if(c==t){
    printf("%d Is Armstrong number\n",c);}
    else
    printf("%d Is Not Armstrong number\n",t);
    return 0;
}
