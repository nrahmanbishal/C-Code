#include<stdio.h>
int main (void)
{
    int a[100],n,i,j,key;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the Element number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(a[j]>key && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("\nThe accending sorted listis\n");
    for(i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;

}
