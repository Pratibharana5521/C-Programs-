#include<stdio.h>
int main()
{printf("enter the range=\n");
int n,m;
int i,j,c=1,b=0,e,d;
scanf("%d%d",&n,&m);
for(i=n+1;i<m;i++)
{
    e=i;b=0;
    for(;i!=0;)
    {d=i%10;i/=10;
    for(c=1,j=d;j>=1;j--)
    c*=j;
    b+=c;}
    if(b==e)printf("%d,",e);
    }
    return 0;
}