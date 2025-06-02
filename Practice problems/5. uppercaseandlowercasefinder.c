#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        if (isupper(str[i]))
            count++;
        i++;
    }

    printf("Output: %d\n", count);
    return 0;
}
