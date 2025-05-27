#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);  

    for (int row = 0; row < size; row++) {
        if (row % 2 == 0) {
            for (int col = 0; col < size; col++) {
                printf("1");
            }
        } else {
            for (int col = 0; col < size; col++) {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
