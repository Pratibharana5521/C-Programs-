#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=(a>b)*1+(b>a)*2;
    switch(c)
    {
        case 1:printf("%d",a);break;
        case 2:printf("%d",b);break;
    
        default:printf("both a and are equal=%d",a);break;
    }
    return 0;
}