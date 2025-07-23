#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,r,t,si;

    printf("enter principle amount:\n");
    scanf("%f", &p);

    printf("enter rate amount:\n");
    scanf("%f", &r);

    printf("enter period of time (in year):\n");
    scanf("%f", &t);

    si=(p*r*t)/100;

    printf("simple interest=%.2f,\nsi");

    return 0;
}
