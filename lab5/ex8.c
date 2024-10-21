#include <stdio.h>
#include <string.h>

int main() {
    char input[100];  
    char reversed[100]; 
    char *tokens[20];
    int tokenCount = 0;

    printf("Enter the text: ");
    fgets(input, sizeof(input), stdin);

   
    input[strcspn(input, "\n")] = 0;

    
    char *token = strtok(input, " ");
    while (token != NULL) {
        tokens[tokenCount++] = token; 
        token = strtok(NULL, " "); 
    }

   
    for (int i = tokenCount - 1; i >= 0; i--) {
        strcat(reversed, tokens[i]);
        if (i > 0) {
            strcat(reversed, " "); 
        }
    }

    printf("%s\n", reversed);

    return 0;
}