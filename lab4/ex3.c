#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);
    
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        
        if ((n - i) % k == 0) {
            printf("\n");
        }
    }

    if (n % k != 0) {
        printf("\n");
    }

    return 0;
}
