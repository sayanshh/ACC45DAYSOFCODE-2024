#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int X;
        scanf("%d", &X);
        if (X + 3 <= 10) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}