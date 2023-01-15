#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,h=0,i;char c[32],d[32];
    scanf("%d%d",&a,&b);
    for(i=0;i<32;i++)
    {
        c[i]=(char)a%2;d[i]=(char)b%2;
        a/=2;b/=2;
    }
    for(i=31;i>=0;i--)
    {
        if(c[i]!=d[i])h++;
    }printf("%d",h);
    return 0;
}