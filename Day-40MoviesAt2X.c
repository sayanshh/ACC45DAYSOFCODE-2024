#include <stdio.h>

int main() {
    int X, Y;

    scanf("%d %d", &X, &Y);

    int total_time = (Y / 2) + (X - Y);

    printf("%d\n", total_time);

    return 0;
}

