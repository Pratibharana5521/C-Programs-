#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){if(a>c)printf("%d",a);else printf("%d",c);}
    if(b>a){if(b>c)printf("%d",b);else printf("%d",c);}
    if(c>b){if(c>a)printf("%d",c);else printf("%d",a);}
    if(a==b&&b==c)printf("a=b=c=%d",a);
    return 0;
}