#include <stdio.h>
#include <string.h>

int main() {
    char str[30];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("The length of your string is [%d characters.]\n", strlen(str)-1);
    return 0;
}
