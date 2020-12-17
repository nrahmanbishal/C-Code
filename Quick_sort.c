#include<stdio.h>
a[100];
int main(void)
{
    int n,i;
    printf("Enter the number of elements in array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(0,n-1);
    printf("\n\nThe sorted array list is: \n");
    printarray(n);
}

void quicksort( int start, int end)
{
    int p;
    if(start<=end)
    {
        p=partition(start, end);
        quicksort(start, p-1);
        quicksort(p+1, end);
    }
}

int partition(int start, int end)
{
    int pivot,p,i,temp;
    pivot=a[end];
    p=start;
    for(i=start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            swap(p,i);
            p++;
        }
    }
    swap(p,end);
    return p;
}

void swap(int b, int c)
{
    int temp;
    temp=a[b];
    a[b]=a[c];
    a[c]=temp;
}

void printarray(int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}
