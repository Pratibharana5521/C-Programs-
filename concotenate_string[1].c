#include<stdio.h>
#include<string.h>
int main()
/*{
    int i,j;
    char a[100],s[100],c[100];
    gets(s);gets(a);
    for(i=0;s[i]!='\0';i++)
    {
        c[i]=s[i];
    }
    for(j=0;a[i]!='\0';j++)
    c[j+i]=a[j];

printf("%s",c);
return 0;}*/

{
    char s[100],a[100];
    gets(s);gets(a);
    strcat(s,a);
    printf("%s",s);
    return 0;
}