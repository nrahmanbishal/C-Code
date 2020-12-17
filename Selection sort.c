#include<stdio.h>
int main (void)
{
    int a[100],n,i,j,index,t,f=0;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the Element number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[index]>a[j])
            {
                index=j;

            }
        }
        t=a[i];
        a[i]=a[index];
        a[index]=t;

    }
    printf("\nThe accending sorted listis\n");
    for(i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;

}

