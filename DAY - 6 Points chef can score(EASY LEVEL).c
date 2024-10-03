#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int score_A_first = 1500 - 6 * X - 4 * Y;
        int score_B_first = 1500 - 6 * Y - 2 * X;
        
        int max_score = (score_A_first > score_B_first) ? score_A_first : score_B_first;

        printf("%d\n", max_score);
    }

    return 0;
}


