#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];  
    char output[100];
    int outputIndex = 0;
    int inSpace = 0;  

    printf("Enter the text: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isspace(input[i])) {
            if (!inSpace) {
                output[outputIndex++] = ' '; 
                inSpace = 1; 
            }
        } else {
            output[outputIndex++] = input[i]; 
            inSpace = 0; 
        }
    }

    if (outputIndex > 0 && output[outputIndex - 1] == ' ') {
        outputIndex--;
    }

    output[outputIndex] = '\0'; 

   
    printf("%s\n", output);

    return 0;
}
