#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
    }
    
    free(s);
    return 0;
}
