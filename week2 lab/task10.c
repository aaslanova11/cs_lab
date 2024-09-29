#include <stdio.h>
#include <math.h>  

int main() {
    double x0, y0, radius, xi, yi;
    
    printf("Enter the circle's center coordinates (x0, y0): ");
    scanf("%lf %lf", &x0, &y0);

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Enter point coordinates (xi, yi) or EOF to stop:\n");

    while (scanf("%lf %lf", &xi, &yi) != EOF) {
        double distance = sqrt(pow(xi - x0, 2) + pow(yi - y0, 2));

        if (distance == radius) {
            printf("Point (%.2lf, %.2lf) is ON the circle.\n", xi, yi);
        } else if (distance < radius) {
            printf("Point (%.2lf, %.2lf) is INSIDE the circle.\n", xi, yi);
        } else {
            printf("Point (%.2lf, %.2lf) is OUTSIDE the circle.\n", xi, yi);
        }
    }

    return 0;
}
