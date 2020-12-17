#include<stdio.h>
int main (void)
{
    int a[50], b, j=0, i=0, m, x, l=0, f=0, h;
    printf("Please Enter The Size of The Array: ");
    scanf("%d",&b);
    for(j=0;j<b;j++)
    {
        printf("Please enter the %d Element: ",j+1);
        scanf("%d",&a[j]);
    }
    //int i,m,x,l=0,c=sizeof(a)/sizeof(a[0]),f=0,h;
    h=b-1;
    printf("\nPlease Enter The number to FInd: ");
    scanf("%d",&x);
    //for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    while(l<=h)
    //do
    {
        m=(h+l/2);
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
            f=1;
            printf("\nFound\n");
            break;
        }
    }
    if(f==0)
    {
        printf("\nNot Found\n");
    }
    return 0;
}
