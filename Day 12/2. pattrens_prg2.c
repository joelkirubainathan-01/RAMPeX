#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid1, mid2;
    if (n % 2 == 1) {
        mid1 = mid2 = n / 2;
    } else {
        mid1 = (n / 2) - 1;  
        mid2 = n / 2;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid1 || i == mid2 || j == mid1 || j == mid2) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
