#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int A, B; 
        scanf("%d %d", &A, &B);
        
        int limakEaten = 0; 
        int bobEaten = 0;   
        int turn = 1;       

        while (1) {
            if (turn % 2 != 0) { 
                if (limakEaten + turn > A) {
                    printf("Bob\n");
                    break;
                }
                limakEaten += turn; 
            } else { 
                if (bobEaten + turn > B) {
                    printf("Limak\n");
                    break;
                }
                bobEaten += turn;
            }
            turn++; 
        }
    }
    
    return 0;
}

