#include <stdio.h>   
#include <math.h>    

int main() {
    int a, b, c;
    double discriminant, root1, root2;

   
    printf("Enter coefficients a, b, and c: ");
    scanf("%d%d%d", &a, &b, &c);


    discriminant = b * b - 4 * a * c;

    
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.f\n", root1);
        printf("Root 2 = %.f\n", root2);
    } else if (discriminant == 0) {
        
        root1 = -b / (2 * a);
        printf("Root = %.f\n", root1);
    } else {
        
        printf("No real roots.\n");
    }

    return 0;
}
