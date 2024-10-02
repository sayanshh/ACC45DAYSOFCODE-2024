#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int X_A, X_B, X_C;
        scanf("%d %d %d", &X_A, &X_B, &X_C);
        
        if (X_A > 50) {
            printf("A\n");
        } else if (X_B > 50) {
            printf("B\n");
        } else if (X_C > 50) {
            printf("C\n");
        } else {
            printf("NOTA\n");
        }
    }

    return 0;
}
