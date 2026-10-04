#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int frequency[256] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    // Find first character with frequency 1
    for (i = 0; str[i] != '\0'; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}