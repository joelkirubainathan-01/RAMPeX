#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Password format: ");
    for (i = 0; str[i] != '\0'; i++)
        printf("*");
    printf("\n");

    return 0;
}
