#include<stdio.h>
int main (void)
{
    int a[]={4,6,7,5,2,9,11,1};
    int x,i=0,c=0;
    scanf("%d",&x);
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]==x)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("\nNot Found\n");
    }
    else
        printf("\n%d Times Found\n",c);
}
