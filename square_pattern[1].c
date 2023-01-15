#include<stdio.h>
int main()
/*{
    int n,i,j;
    printf("enter the raw no.=\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   {for ( j = 1; j<= n; j++)
    {
        printf("%d ",j);
    }printf("\n");}
 return 0;   
}*/

/*{
    int n,i,j;
    printf("enter the raw no.=\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("*");
    printf("\n");}
    return 0;
}*/

{
    int n,i,j,c=0;
    printf("enter the raw no.=\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)printf("*");
            else printf(" ");
        }printf("\n");
    }
return 0;    }
