#include<stdio.h>
int a[9]={1000,500,100,50,20,10,5,2,1};
int main (void)
{
    int n,sum=0,i=0,b=0;
    printf("Enter the amount to pay ");
    scanf("%d",&n);
    printf("\n\n");
    while(n!=0)
    {
        sum=n/a[i];
        if(sum!=0){
        printf("We have to pay  %d  notes of dollar %d\n\n",sum,a[i]);}
        n=n-(sum*a[i]);
        b=b+sum;
        i++;
    }
    printf("Minimum payable note is  %d\n\n",b);
    return 0;
}
