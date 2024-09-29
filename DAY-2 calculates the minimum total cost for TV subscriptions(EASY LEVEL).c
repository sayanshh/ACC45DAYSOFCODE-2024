#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int subscriptions_needed = (N + 5) / 6;

        int total_cost = subscriptions_needed * X;

        printf("%d\n", total_cost);
    }

    return 0;
}
