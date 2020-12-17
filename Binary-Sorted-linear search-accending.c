#include<stdio.h>
int main (void)
{
    int a[]={5,6,7,8,9,11,12,13,15};
    int i,m,x,flag=0,l=0,h=sizeof(a)/sizeof(a[0]);
    printf("\nThere Are %d Element In The Array\n",h);
    printf("\nEnter the number: ");
    scanf("%d",&x);
   for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {

        m=(l+h) / 2;
        if(a[m]>x)
        {
            h=m-1;
        }
        else if(a[m]<x)
        {
            l=m+1;
        }
        else
        {
            printf("\nFound\n");
            flag=1;
            break;
        }
    }
        if(flag==0)
    {
        printf("\nNot Found\n");
    }
     return 0;
}
