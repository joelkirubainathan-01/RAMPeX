#include <stdio.h>

int main() {
    char ch, str[100];
    int found = 0, i = 0;

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    printf("Enter string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            found = 1;
            break;
        }
        i++;
    }

    if (found)
        printf("Output: Present\n");
    else
        printf("Output: Not Present\n");

    return 0;
}
