#include <stdio.h>

int main() {
    int n, i, num;
    int even_sum = 0, odd_sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_sum += num; 
        } else {
            odd_sum += num;  
        }
    }

    printf("Sum of even elements: %d\n", even_sum);
    printf("Sum of odd elements: %d\n", odd_sum);

    return 0;
}
