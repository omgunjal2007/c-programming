#include <stdio.h>
#include <stdlib.h>

int main()
{int choice;
 float a,b;

    printf("menu:\n");
    printf("1.add\n2. subtract\n3. multiply\n4. divide\n");
    printf("enter your choice (1-4):  ");
    scanf("%d", &choice);

    printf("enter two number:");
    scanf("%f %f", &a,&b);

    switch(choice) {
    case 1:
        printf("result=%.2f",a+b);
        break;
    case 2:
        printf("result=%.2f",a-b);
        break;
        case3:
        printf("result=%.2f",a*b);
        break;
        case4:
            if (b!=0)
            printf("result=%.2f",a/b);
            else
                printf("error:division by zero!");
            break;
    default:
        printf("invalid choice.");
    }




    return 0;
}
