#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1001];
    int counts[10] = {0};
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            counts[s[i] - '0']++;
        }
    }

    
    for (int i = 0; i < 10; i++) {
        printf("%d%c", counts[i], (i == 9 ? '\n' : ' '));
    }

    return 0;
}

