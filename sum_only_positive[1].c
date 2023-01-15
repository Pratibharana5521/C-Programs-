#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("enter total numbers=\n");
    for(;n!=-1;)
    {
        scanf("%d",&n);
        if(n>=0)c+=n;
    }printf("%d",c);
    return 0;
}