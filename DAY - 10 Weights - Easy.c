#include <stdio.h>

char* can_measure(int W, int X, int Y, int Z) {
    for (int a = -10; a <= 10; a++) {
        for (int b = -10; b <= 10; b++) {
            for (int c = -10; c <= 10; c++) {
                if (W == a * X + b * Y + c * Z) {
                    return "YES";
                }
            }
        }
    }
    return "NO";
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z);
        printf("%s\n", can_measure(W, X, Y, Z));
    }
    return 0;
}