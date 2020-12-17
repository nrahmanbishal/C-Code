#include<stdio.h>
int main(void)
{
    int a[100],n,i;
    printf("Enter the number of elements in the list ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    merge_sort(a,0,n-1);
    printf("\n");
    printf("The sorted list is \n ");
    print(a,n);
    return 0;
}

void merge_sort(int a[], int p, int r)
{
    int q;

    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);

        merge_array(a, p, q, r);
    }
}

void merge_array(int a[], int p, int q, int r)
{
    int i,j,k,n1,n2;
    n1=q-p+1;
    n2=r-q;
    int L[n1], R[n2];

    for(i=0;i<n1;i++)
    {
        L[i]=a[p+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=a[q+1+j];
    }
    i=0;
    j=0;
    k=p;
    while(i<n1 && j<n2)
    {
        if(L[i]<= R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }

}

void print(int a[],int n)
{

    printf("\n");
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("\n");
}
