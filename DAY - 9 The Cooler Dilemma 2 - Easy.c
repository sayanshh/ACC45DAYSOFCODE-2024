#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int n = Y / X - 1;
        if (n <= 0) {
            printf("0\n");
        } else {
            printf("%d\n", n);
        }
    }

    return 0;
}