#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    while (T--) {
        int N;
        scanf("%d", &N);  
        
        int odd_count = (N + 1) / 2;  
        int even_count = N / 2;       
        
        int result = 2 * odd_count * even_count;
        
        printf("%d\n", result);
    }
    
    return 0;
}


