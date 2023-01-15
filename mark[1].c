#include<stdio.h>
int main()
{
    int m,p,c;
    printf("enter the number in maths=\n");
    scanf("%d",&m);
    printf("enter the number in mphysics=\n");
    scanf("%d",&p);
    printf("enter the number in chemistry=\n");
    scanf("%d",&c);
    if(p+c+m>=180)printf("yes you are elegible with %d score",p+m+c);
    else printf("sorry!! you are not elegible your score is %d",p+m+c);
    return 0;
    }