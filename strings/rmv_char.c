#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char *s_ptr, str[50];
    int i;

    printf("Enter a string with numbers: ");
    fgets(str, sizeof(str), stdin);

    s_ptr = &(str[0]);

    for(i=0; i<=strlen(str)-1; i++){

      if(isdigit(*(s_ptr+i)) == 0)
        printf("%c", *(s_ptr+i));
      else
        continue;
    }
}
