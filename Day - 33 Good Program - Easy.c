#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }

    return 0;
}