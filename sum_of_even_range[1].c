#include<stdio.h>
int main()
{
    float m,n,c,d;int i;
    printf("enter the range =\n");
    scanf("%f%f",&m,&n);
for(i=m+1;i<n;i++)
if(i%2==0){c+=i;d++;}
printf("average of all even is=%g",c/d);
return 0;
}