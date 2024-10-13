#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N; 
        scanf("%d", &N);

        int notebooks = N * 10;

        printf("%d\n", notebooks);
    }

    return 0;
}
