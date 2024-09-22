#include <stdio.h>

int main() {
    int t1, t2, t3, t4;

    printf("Enter the duration of task 1: ");
    scanf("%d", &t1);
    printf("Enter the duration of task 2: ");
    scanf("%d", &t2);
    printf("Enter the duration of task 3: ");
    scanf("%d", &t3);
    printf("Enter the duration of task 4: ");
    scanf("%d", &t4);

    int totalTime = t1;
    if (t2 > totalTime) totalTime = t2;
    if (t3 > totalTime) totalTime = t3;
    if (t4 > totalTime) totalTime = t4;

    printf("Total time required to complete all jobs: %d hours\n", totalTime);

    return 0;
}
