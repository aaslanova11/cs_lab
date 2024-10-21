#include <stdio.h>

int main() {
    char text[1000];  
    int length = 0;   

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin); 

    
    while (text[length] != '\0') {
        length++;  
    }

    if (text[length - 1] == '\n') {
        length--;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}
 