#include <stdio.h>
#include <string.h>

int main() {
    char input[100];  
    char reversed[100]; 
    int length, j = 0;

    printf("Enter the text: ");
    fgets(input, sizeof(input), stdin);

   
    input[strcspn(input, "\n")] = 0;

   
    length = strlen(input);

    
    for (int i = length - 1; i >= 0; i--) {
        reversed[j++] = input[i];
    }
    reversed[j] = '\0';

    
    printf("%s\n", reversed);

    return 0;
}
