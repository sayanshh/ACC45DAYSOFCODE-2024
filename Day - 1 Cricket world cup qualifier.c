#include <stdio.h>

int main() {
    int points;

    printf("Enter the total points scored by the team: ");
    scanf("%d", &points);

    if (points >= 12) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}