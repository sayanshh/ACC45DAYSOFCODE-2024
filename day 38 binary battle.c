#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        long long N, A, B;
        scanf("%lld %lld %lld", &N, &A, &B); 
        int rounds = log2(N);

        long long totalTime = rounds * A + (rounds - 1) * B;

        printf("%lld\n", totalTime);
    }

    return 0;
}