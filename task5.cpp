#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    num = abs(num);

    int digit1 = num / 100;          
    int digit2 = (num / 10) % 10;    
    int digit3 = num % 10;          

    
    int greatest = digit1;
    int smallest = digit1;

    
    if (digit2 > greatest) {
        greatest = digit2;
    }
    if (digit2 < smallest) {
        smallest = digit2;
    }
 
    if (digit3 > greatest) {
        greatest = digit3;
    }
    if (digit3 < smallest) {
        smallest = digit3;
    }

    printf("Greatest digit: %d\n", greatest);
    printf("Smallest digit: %d\n", smallest);

    return 0;
}
