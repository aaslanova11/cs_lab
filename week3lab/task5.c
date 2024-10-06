#include <stdio.h>

int main() {
    int r1c, r1s, r2c, r2s, time;

    scanf("%d%d%d%d", &r1c, &r1s, &r2c, &r2s);

    if ((r1s == r2s) || (r1c > r2c && r1c > r2c) || (r1s < r2s && r1c < r2c)) {
        printf("NEVER\n");
    } else {
    
        time = (r2c - r1c) / (r1s - r2s);

        if (time >= 0 && (r1c + time * r1s == r2c + time * r2s)) {
            printf("%d %d\n", r1c + time * r1s, time);
        } else {
            printf("NEVER\n");
        }
    }

    return 0;
}
