#include <stdio.h>

int main() {
    int x, y;     
    int x0, y0;   
    int radius;    

   printf("Enter the coordinates of the point (x y): ");
    scanf("%d%d", &x, &y);
    printf("Enter the center of the circle (x0 y0) and radius: ");
    scanf("%d%d%d", &x0, &y0, &radius);

    
    int distanceSquared = (x - x0) * (x - x0) + (y - y0) * (y - y0);
    int radiusSquared = radius * radius;

    
    if (distanceSquared == radiusSquared) {
        printf("The point is ON the circle.\n");
    } else if (distanceSquared < radiusSquared) {
        printf("The point is INSIDE the circle.\n");
    } else {
        printf("The point is OUTSIDE the circle.\n");
    }

    return 0;
}
