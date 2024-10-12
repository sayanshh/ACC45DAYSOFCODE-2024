#include <stdio.h>

int main() {
    int T, N, K, M, bags;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &N, &K, &M);
        bags = (N + (K * M - 1)) / (K * M);
        printf("%d\n", bags);
    }
    return 0;
}