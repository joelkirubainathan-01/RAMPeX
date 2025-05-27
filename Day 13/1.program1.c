#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int center1 = size / 2;
    int center2 = (size % 2 == 0) ? (size / 2 - 1) : center1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == center1 || row == center2 || col == center1 || col == center2) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
