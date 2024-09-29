#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0; 
    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &n);
 
    i = 1;
    while (i <= n) {
        printf("Enter a number: ");
        scanf("%f", &num);
        sum = sum + num;  
          i++;
    }

    printf("Sum of the numbers: %.2f\n", sum);

    return 0;
}
