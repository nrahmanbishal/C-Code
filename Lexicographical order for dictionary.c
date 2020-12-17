#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i,j,f=0;
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]>=65&&str1[i]<=90){
        str1[i]=str1[i]+32;}
        if(str2[i]>=65&&str2[i]<=90){
        str2[i]=str2[i]+32;}
    }
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]<str2[i]){
            f=1;
            break;}
        else if(str1[i]>str2[i]){
            f=2;
            break;}
    }
    if(f==1){
        printf("-1\n");}
    else if(f==2){
            printf("+1\n");}
    else{
    printf("0\n");}
    return 0;
    }
