#include <stdio.h>
#include <string.h>

int main() {
    char input[100];  
    char output[100]; 
    int outputIndex = 0;

    printf("Enter the text: ");
    fgets(input, sizeof(input), stdin);

    
    input[strcspn(input, "\n")] = 0;


    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '#') {
            output[outputIndex++] = '_'; 
        } else {
            output[outputIndex++] = input[i]; 
        }
    }
    output[outputIndex] = '\0'; 

    
    printf("%s\n", output);

    return 0;
}
