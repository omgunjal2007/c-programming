#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,greatest;

    printf("enter two number:\n");
    scanf("%d%d", &a,&b);

    greatest=(a>b&b>a);
    printf("greatest number is=%d\n", greatest);

    return 0;
}
