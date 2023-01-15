#include<stdio.h>
int main()
{
    int n,i,j,c=1,b=0,e,d;
    printf("enter the number =\n");
    scanf("%d",&n);e=n;
    for(;n!=0;)
    {d=n%10;n/=10;
    for(c=1,i=d;i>=1;i--)
    c*=i;
    b+=c;}
    if(b==e)printf("yes %d is an strong number",e);
    else printf("not strong number");
    return 0;
}