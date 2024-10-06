#include <stdio.h>

int main() {
    int n, i;
    
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    

    float heights[n];
    
    printf("Enter the heights of the students:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &heights[i]);
    }

    int tallest_index = 0;
    int shortest_index = 0;

    
    for (i = 1; i < n; i++) {
        if (heights[i] > heights[tallest_index]) {
            tallest_index = i; 
        }
        if (heights[i] < heights[shortest_index]) {
            shortest_index = i; 
        }
    }


    printf("Tallest student is at position %d with height %.2f\n", tallest_index + 1, heights[tallest_index]);
    printf("Shortest student is at position %d with height %.2f\n", shortest_index + 1, heights[shortest_index]);

    return 0;
}
