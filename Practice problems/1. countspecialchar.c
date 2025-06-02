#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!isalnum(str[i])) 
            count++;
    }

    printf("Output: %d\n", count);
    return 0;
}
