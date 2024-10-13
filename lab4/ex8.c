#include <stdio.h>

int main() {
    int n, num, sum = 0;
    int min, max;
    scanf("%d", &n);


    scanf("%d", &num);
    sum = num;
    min = num;
    max = num;

    
    for(int i = 1; i < n; i++) {
        scanf("%d", &num);
        sum += num;  

        
        if(num < min) {
            min = num;
        }
        if(num > max) {
            max = num;
        }
    }

    sum = sum - min - max;

    printf("%d\n", sum);

    return 0;
}
