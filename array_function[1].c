#include<stdio.h>
void array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    array(a,n);
    for(i=0;i<n;i++)
    printf("%d,",a[i]);
    return 0;
}