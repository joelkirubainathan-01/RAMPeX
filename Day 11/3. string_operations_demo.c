#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";

   
    printf("Length of str1: %lu\n", strlen(str1));

    strcpy(str2, str1);
    printf("After strcpy, str2: %s\n", str2);


    strcat(str1, " World");
    printf("After strcat, str1: %s\n", str1);

  
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are different.\n");
    }

    return 0;
}
