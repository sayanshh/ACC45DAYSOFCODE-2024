#include <stdio.h>

int min_coins_for_gifts(int N) {
    return 4 * (N / 5) + (N % 5);
}

int main() {
    int T;  
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        
        printf("%d\n", min_coins_for_gifts(N));
    }

    return 0;
}

