#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100005

typedef struct {
    int value;
    int count;
} Frequency;

int compare(const void *a, const void *b) {
    return ((Frequency *)b)->count - ((Frequency *)a)->count; 
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        
        int A[MAX_N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        Frequency freq[MAX_N] = {0};
        int unique_count = 0;

        for (int i = 0; i < N; i++) {
            int found = 0;
            for (int j = 0; j < unique_count; j++) {
                if (freq[j].value == A[i]) {
                    freq[j].count++;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                freq[unique_count].value = A[i];
                freq[unique_count].count = 1;
                unique_count++;
            }
        }

        qsort(freq, unique_count, sizeof(Frequency), compare);

        int max_freq = freq[0].count;
        int operations = N - max_freq;

        printf("%d\n", operations);
    }

    return 0;
}
