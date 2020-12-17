#include<stdio.h>
int a[100];

int main(void)
{
    int n,i;
    printf("Enter the number of elements in the list ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    merge_sort(0,n-1);
    printf("\n");
    printf("The sorted list is \n ");
    print(n);
    return 0;
}

void merge_sort(int p, int r)
{
    int q;

    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(p,q);
        merge_sort(q+1,r);

        merge_array(p, q, r);
    }
}

void merge_array(int p, int q, int r)
{
    int i,j,k,n1,n2;
    n1=q-p+1;
    n2=r-q;
    int L[n1+1], R[n2+1];

    L[n1]=99999;
    R[n2]=99999;

    for(i=0;i<n1;i++)
    {
        L[i]=a[p+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=a[q+1+j];
    }

    k=p;
   for(i=0,j=0; i<n1 || j<n2; k++)
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

    }
}

void print(int n)
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


