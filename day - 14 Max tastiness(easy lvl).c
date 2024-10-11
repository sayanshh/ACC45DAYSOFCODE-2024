#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int max_tastiness = a + c; 
        if (a + d > max_tastiness) {
            max_tastiness = a + d; 
        }
        if (b + c > max_tastiness) {
            max_tastiness = b + c; 
        }
        if (b + d > max_tastiness) {
            max_tastiness = b + d;
        }

        printf("%d\n", max_tastiness);
    }

    return 0;
}
