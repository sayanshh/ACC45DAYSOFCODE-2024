#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        int Valuation1 = 10 * A; 
        int Valuation2 = 5 * B; 
        
        if (Valuation1 > Valuation2) {
            printf("FIRST\n");
        } else if (Valuation1 < Valuation2) {
            printf("SECOND\n");
        } else {
            printf("ANY\n");
        }
    }

    return 0;
}

