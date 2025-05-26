#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read input

    for (int i = 1; i <= n; i++) {
        char ch = (i % 2 == 1) ? '1' : '0';  // Odd row -> '1', Even row -> '0'

        for (int j = 0; j < n; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
