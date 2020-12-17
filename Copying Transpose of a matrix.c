#include<stdio.h>
int main(void)
{
int i,j,m,n, a[50][50],b[50][50];
printf("Please enter the number of row ");
scanf("%d",&m);
printf("Please enter the number of column ");
scanf("%d",&n);
printf("\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("\n");
printf("\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

printf("\n");
printf("\n");
printf("The transpose matrix is");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        b[j][i]=a[i][j];
    }
    printf("\n");
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
return 0;
}

