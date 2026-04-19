#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // Allocate 13 bytes: 12 for "Hello World!" and 1 for the null terminator '\0'
    char *s = (char*)malloc(13 * sizeof(char));
    // Always check if malloc succeeded
    if (s == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    // strcpy automatically adds the null terminator
    strcpy(s, "Hello World!");
    // Print the string
    printf("%s\n", s);
    // Free the allocated memory to prevent leaks
    free(s);
    
    return 0;
}
