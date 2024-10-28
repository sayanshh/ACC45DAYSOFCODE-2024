#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int N, K; 
        scanf("%d %d", &N, &K);
        
        int countWolverine = 0; 
        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic);

            int newCharacteristic = characteristic + K;
       
            if (newCharacteristic % 7 == 0) {
                countWolverine++;
            }
        }
        
        printf("%d\n", countWolverine);
    }
    
    return 0;
}