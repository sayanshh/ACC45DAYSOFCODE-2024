#include <stdio.h>

int count_tuesdays(int N) {
    if (N < 2) {
        return 0; 
    }
    return (N - 2) / 7 + 1;
}

int main() {
    int T; 
    scanf("%d", &T); 
    
    while (T--) {
        int N;
        scanf("%d", &N); 
        printf("%d\n", count_tuesdays(N)); 
    }
    
    return 0;
}

