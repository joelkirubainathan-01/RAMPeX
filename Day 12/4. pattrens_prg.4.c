#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int start = (n - 1) / 2; 
    int end = n / 2;        

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= start && i <= end && j >= start && j <= end)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    return 0;
}
