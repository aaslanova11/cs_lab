#include <stdio.h>
#include <stdlib.h> 
int main() {
    int num;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    num = abs(num);

    int digit1 = num / 100;          
    int digit2 = (num / 10) % 10;    
    int digit3 = num % 10;           

    int product1 = digit1 * digit2;      
    int product2 = digit1 * digit3;       
    int product3 = digit2 * digit3;      
    int product4 = digit1 * digit2 * digit3; 

    int maxProduct = product1;
    if (product2 > maxProduct) maxProduct = product2;
    if (product3 > maxProduct) maxProduct = product3;
    if (product4 > maxProduct) maxProduct = product4;

    printf("Maximum product of the digits: %d\n", maxProduct);

    return 0;
}
 