#include <stdio.h>
#include <string.h>

int main() {
    int n, len, i;
    char str[100], temp;

    printf("Enter number of rotations: ");
    scanf("%d", &n);

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);
    n = n % len;  

    for (i = 0; i < n; i++) {
        temp = str[0];
        memmove(str, str + 1, len - 1);
        str[len - 1] = temp;
    }

    printf("Output: %s\n", str);
    return 0;
}
