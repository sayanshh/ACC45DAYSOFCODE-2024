#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);
        
        int distance = abs(A - B);
        
        if (distance == 0) {
            printf("0\n");
        } else {
            int steps = (distance + K - 1) / K; 
            printf("%d\n", steps);
        }
    }

    return 0;
}

