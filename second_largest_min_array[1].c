#include<stdio.h>
int main()
{int n,i,SM,sm,m,M;
printf("enter the size=\n");
scanf("%d",&n);int a[n];
printf("enter the elements in it=\n");
scanf("%d",&a[0]);int max=a[0],min=a[0];
for(i=1;i<n;i++)
{scanf("%d",&a[i]);
if(a[i]>max)max=a[i],M=i;
if(a[i]<min)min=a[i],m=i;
}sm=a[0];SM=a[0];
for(i=0;i<n;i++)
{
    if(a[i]!=max&&a[i]>sm)sm=a[i];
    if(a[i]!=min&&a[i]<=SM)SM=a[i];
}printf("sec max=%d \n sec min==%d",sm,SM);
return 0;}