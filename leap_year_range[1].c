#include<stdio.h>
int main()
{
    int n,m,c=0,i;
    printf("enter the range of year=\n");
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++)
    {
        if(i%4==0&&i%400!=0)c++;
    }printf("No. of leap years =%d",c);
    return 0;
}