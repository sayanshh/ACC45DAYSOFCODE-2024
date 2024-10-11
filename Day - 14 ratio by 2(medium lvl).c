#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); 

        int operations = 0;

        if (X >= 2 * Y || Y >= 2 * X) {
            operations = 0; 
        } else {
            int increase_X = (2 * Y) - X; 
            int increase_Y = (2 * X) - Y; 

            operations = (increase_X < increase_Y) ? increase_X : increase_Y;
        }

        printf("%d\n", operations);
    }

    return 0;
}
