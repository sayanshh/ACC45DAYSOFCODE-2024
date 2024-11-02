#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N; 
        scanf("%d", &N);
   
        int choices = N * (N - 1);
     
        printf("%d\n", choices);
    }
    
    return 0;
}