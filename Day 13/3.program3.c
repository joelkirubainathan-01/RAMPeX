#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    for (int row = 0; row < size; row++) {          
        for (int col = 0; col < size; col++) {      
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1)
                printf("1");              
            else
                printf("0");              
        }
        printf("\n");
    }

    return 0;
}
