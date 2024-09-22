#include <stdio.h>

int main() {
    float width, length, height, radius;
 
    printf("Enter the width, length, height of the box, and radius of the basketball: ");
    scanf("%f %f %f %f", &width, &length, &height, &radius);

    
    float diameter = 2 * radius;

    if (width >= diameter && length >= diameter && height >= diameter) {
        printf("Yes, you can send the basketball to your friend.\n");
    } else {
        printf("No, you cannot send the basketball to your friend.\n");
    }

    return 0;
}
