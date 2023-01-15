#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j;
    char a[100];
    scanf("%[^\n]s",a);
    l=strlen(a);
    i=0;j=l-1;
    for(i=0;i<j;i++,j--)
    {
        int c=a[i];
        a[i]=a[j];a[j]=c;
    }puts(a);
    return 0;
}