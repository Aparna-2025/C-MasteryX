#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longest[1000] = "";
    int n, i, left, right, start, length;
    int maxLength = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    for (i = 0; i < n; i++) {

        // Odd length palindrome
        left = i;
        right = i;

        while (left >= 0 && right < n && str[left] == str[right]) {
            length = right - left + 1;

            if (length > maxLength) {
                maxLength = length;
                start = left;
            }

            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < n && str[left] == str[right]) {
            length = right - left + 1;

            if (length > maxLength) {
                maxLength = length;
                start = left;
            }

            left--;
            right++;
        }
    }

    for (i = start; i < start + maxLength; i++) {
        longest[i - start] = str[i];
    }

    longest[maxLength] = '\0';

    printf("Longest palindromic substring: %s\n", longest);

    return 0;
}