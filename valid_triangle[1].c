#include<stdio.h>
int main()
 {printf("enter no. of test cases=\n=");
    int T;
            scanf("%d",&T);
            for(int i=1;i<=T;i++){int a,b,c;
            printf("enter all three angels=\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a+b+c==180)printf("YES");
            else printf("NO");printf("\n");} 
    return 0;
}