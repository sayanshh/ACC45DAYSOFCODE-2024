#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d", &N);
        int counter = 0;
        for(int j = 1; j <= N; j++) {
            if((j % 7) == 2) {
                counter++;
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}