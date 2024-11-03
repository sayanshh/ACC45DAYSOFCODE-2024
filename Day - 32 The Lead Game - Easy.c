#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int p1_score = 0, p2_score = 0, max_lead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int p1_round_score, p2_round_score;
        scanf("%d %d", &p1_round_score, &p2_round_score);

        p1_score += p1_round_score;
        p2_score += p2_round_score;

        int current_lead = p1_score - p2_score;
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = 1;
        } else if (-current_lead > max_lead) {
            max_lead = -current_lead;
            winner = 2;
        }
    }

    printf("%d %d\n", winner, max_lead);

    return 0;
}