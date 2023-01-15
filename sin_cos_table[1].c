#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    for(i=0;i<=360;i+=30.4)
    {
        printf("sin=%f,",sin(i));
        printf("cos=%f;\n,",cos(i));
    }return 0;
}