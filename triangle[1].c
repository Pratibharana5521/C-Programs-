#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three side of triangle=\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)printf("yes it is a triangle");
    else printf("it is not an triangle");
    return 0;
}