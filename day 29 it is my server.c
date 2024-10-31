#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q); 

        int total_points = P + Q; 

        int serve_position = total_points % 4;
        if (serve_position == 0 || serve_position == 1) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}