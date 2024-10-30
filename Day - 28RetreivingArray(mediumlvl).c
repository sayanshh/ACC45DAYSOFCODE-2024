#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        long long B[N]; 
        long long sumB = 0; 

        for (int i = 0; i < N; i++) {
            scanf("%lld", &B[i]);
            sumB += B[i];
        }

        long long S = sumB / (N + 1);

        for (int i = 0; i < N; i++) {
            long long A_i = B[i] - S;
            printf("%lld ", A_i);
        }
        printf("\n");
    }

    return 0;
}

