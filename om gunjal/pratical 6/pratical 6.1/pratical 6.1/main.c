#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100], part[100];
    int start, length, i;

    printf("enter a string:");
    gets(str); // or use fgets(str, sizeof (str),stdin);

    printf("enter starting position (0-based index):");
    scanf("%d",&start);

    printf("enter the character to extract:");
    scanf("%d",&length);

    for (i=0; i < length; i++)  {
            part[i] = str[start + i];
    }
    part[i] ='\0';
    printf("extractrd part: %s\n", part);

    return 0;
}
