#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read string including spaces

    while (str[i]) {      // Loop until null character
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
