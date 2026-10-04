#include <stdio.h>

int main() {
    char str[1000];
    int seen[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("After removing duplicates: ");

    for (i = 0; str[i] != '\0'; i++) {

        if (seen[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            seen[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}