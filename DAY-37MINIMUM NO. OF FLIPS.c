#include <stdio.h>

void min_operations_to_zero_sum(int T) {
    while (T--) {
        int N;
        scanf("%d", &N);  
        int A[N];
        int sum_A = 0;
        int count_1 = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            sum_A += A[i];
            if (A[i] == 1) {
                count_1++;
            }
        }

        if (sum_A % 2 != 0) {
            printf("-1\n");
        } else {
            int count_neg1 = N - count_1; 
            int diff = (count_1 > count_neg1) ? (count_1 - count_neg1) : (count_neg1 - count_1);
            printf("%d\n", diff / 2);
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);  
    min_operations_to_zero_sum(T);  
    return 0;
}

