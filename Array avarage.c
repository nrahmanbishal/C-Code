#include<stdio.h>
int main(void)
{
    int a[5],i,sum=0,avg;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("%d",avg);
    return 0;
}

