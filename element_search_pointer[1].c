#include<stdio.h>
void array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int search(int e,int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    if(a[i]==e)break;
    return i;
}
int main()
{
    int n,i,e;
    scanf("%d",&n);
    int a[n];
    array(a,n);
    printf("enter the elment=\n");
    scanf("%d",&e);
    if()
    printf("yes  at =%d",search(e,a,n));
    return 0;
}