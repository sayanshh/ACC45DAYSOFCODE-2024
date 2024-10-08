#include <stdio.h>
#include <stdlib.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        printf("%d\n", abs(X - Y));
    }
    return 0;
}
