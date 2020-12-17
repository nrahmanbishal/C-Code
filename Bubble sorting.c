#include<stdio.h>
int main (void)
{
    int a[100],n,i,j,m;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the Element number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                m=a[j];
                a[j]=a[i];
                a[i]=m;
            }
        }
    }
    printf("\nThe ascending sorted list\n");
    for(i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;

}
