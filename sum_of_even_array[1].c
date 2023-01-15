#include<stdio.h>
int main()
{
    int n,i,c=0,s=0;
    printf("enter the size of array=\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements in it=\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
if(a[i]%2==0){b[c]=a[i];c++;}
for(i=0;i<c;i++)
printf("%d,",b[i]);
for(i=0;i<c;i++)
{s+=b[i];}
printf("\n sum=%d",s);
return 0;
}