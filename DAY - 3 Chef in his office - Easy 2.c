#include <stdio.h>
int main() {
    int T, X, Y, totalHours;
    
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y); 
        totalHours =4 * X + Y; 

        printf("%d\n", totalHours);

    }
    return 0;
}