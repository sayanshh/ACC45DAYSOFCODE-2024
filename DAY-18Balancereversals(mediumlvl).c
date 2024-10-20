#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        int N;
        scanf("%d", &N); 
        char A[N + 1];     
        scanf("%s", A);    

        int count0 = 0, count1 = 0;

        for (int i = 0; i < N; i++) {
            if (A[i] == '0') {
                count0++;
            } else {
                count1++;
            }
        }

        for (int i = 0; i < count0; i++) {
            putchar('0');
        }
        for (int i = 0; i < count1; i++) {
            putchar('1');
        }
        putchar('\n');  
    }

    return 0;
}

