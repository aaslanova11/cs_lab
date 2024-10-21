#include <stdio.h>
#include <string.h>

int main() {
    char input[100];  
    printf("Enter the text: ");
    fgets(input, sizeof(input), stdin);
    
    input[strcspn(input, "\n")] = 0;

    int tokenCount = 1; 
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '#') {
            tokenCount++;
        }
    }

    printf("%d\n", tokenCount);
    
    return 0;
}
