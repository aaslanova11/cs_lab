#include <stdio.h>
#include <string.h>

int main() {
    char text[100];   
    char target[50];  

    
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; 

    
    printf("Enter the target: ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = 0; 

    
    char *position = strstr(text, target);

    if (position != NULL) {
       
        int index = position - text;
        printf("Found at index: %d\n", index);
    } else {
        printf("Target not found.\n");
    }

    return 0;
}
