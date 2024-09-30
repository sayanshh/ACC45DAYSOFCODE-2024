#include <stdio.h>

int main() {
    int T, N, X;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &N,&X);
        int isPossible = 0;
        if (X % 2 != 0 && N % 2 == 0) {
            isPossible = 0;
        } else {
        if (X % 2 == 0 && N % 2 != 0) {
            isPossible = 0;
            } else {
                if(X > N) {
                    isPossible = 0;
                } else {
                    if (X == N) {
                        isPossible = 1;
                    } else {
                        while (N > X) {
                            if (N % 2 !=0)
                            {
                                isPossible = 0;
                                break;
                            }
                            N /= 2;
                        }
                        if (N != X) {
                            isPossible = 0;
                        }
                    }
                }

            }
        }
            if (isPossible) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
        return 0;
    }
