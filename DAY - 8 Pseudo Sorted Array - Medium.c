#include <stdio.h>

int main() {
    int T, N, i, count, temp;
    int A[100005];

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        for (i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        count = 0;
        for (i = 0; i < N - 1; i++) {
            if (A[i] > A[i + 1]) {
                count++;
                if (count > 1) {
                    break;
                }
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }

        if (count <= 1) {
            for (i = 0; i < N - 1; i++) {
                if (A[i] > A[i + 1]) {
                    printf("NO\n");
                    break;
                }
            }
            if (i == N - 1) {
                printf("YES\n");
            }
        } else {
            printf("NO\n");
        }
    }

    return 0;
}