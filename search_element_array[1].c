#include<stdio.h>
int main()
{
    int n,i,j,c,d=0;
    printf("enter the size=\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elments=\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element you wana search=\n");
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]==c){b[d]=i;d++;}
    }
if(d!=0){printf("index of given element are=\n");
   for(i=0;i<d;i++)
    printf("%d ",b[i]);}
    else if (d==9){printf("element is not found");}
    return 0;
}