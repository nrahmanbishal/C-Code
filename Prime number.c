#include<stdio.h>
int main(void)
{
    int i,n,a=0;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0){
        a=1;
        break;}
    }
    if(a==0){
        printf("\n%d is a prime number\n",n);}
        else{
        printf("\n%d is a not prime number\n",n);}
    return 0;
}
