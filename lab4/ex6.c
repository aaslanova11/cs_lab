#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Element counts:\n");
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || arr[i] != arr[i + 1]) {
            printf("%d occurs %d time(s)\n", arr[i], count);  
            count = 1;  
        } else {
            count++;  
            }
    }

    return 0;
}
