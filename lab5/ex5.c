#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];  
    int length, isPalindrome = 1; 

    printf("Enter the text: ");
    fgets(input, sizeof(input), stdin);

    
    input[strcspn(input, "\n")] = 0;

   
    length = strlen(input);

    
    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }


    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
