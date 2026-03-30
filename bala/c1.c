#include <stdio.h>

int main() {
    char s[100]; // Buffer to hold the input string
    
    // Reads the entire line including spaces until a newline character
    scanf("%[^\n]%*c", s);
    
    // Print the required greeting
    printf("Hello, World!\n");
    
    // Print the input string
    printf("%s", s);
    
    return 0;
}
