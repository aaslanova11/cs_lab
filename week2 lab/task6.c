#include <stdio.h>

int main() {
    int num, digit;
    int result = 0;
    int place = 1;  

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;  
        if (digit != 0) {
            result = result + digit * place;  
            place = place * 10;               
        }
        num = num / 10;  
    }
    printf("Resulting number: %d\n", result);

    return 0;
}

