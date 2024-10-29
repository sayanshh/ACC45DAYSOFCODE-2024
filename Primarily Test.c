
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;     
    if (n == 2) return true;      
    if (n % 2 == 0) return false; 

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        if (is_prime(N)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}

