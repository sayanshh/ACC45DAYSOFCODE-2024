#include <stdio.h>

int calculate_amount_to_pay(int a, int b, int c) {
    int total_cost = a + b + c;
    int min_price = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    return total_cost - min_price;
}
int main() {
    int T;  
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        
        printf("%d\n", calculate_amount_to_pay(A, B, C));
    }

    return 0;
}

