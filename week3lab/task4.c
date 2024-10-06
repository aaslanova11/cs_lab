#include <stdio.h>

int main() {
    int n;
    float num, sum = 0.0;
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        scanf("%f", &num);
        sum += num;
    }

    printf("%.2f\n", sum);

    return 0;
}
