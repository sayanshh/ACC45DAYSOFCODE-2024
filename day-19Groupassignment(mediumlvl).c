#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000

int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        int N;
        scanf("%d", &N);  
        
        int *P = (int *)malloc(N * sizeof(int));
        int count[MAX_N + 1] = {0};  

        for (int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
            count[P[i]]++;  
        }

        int possible = 1;  

        for (int i = 2; i <= N; i++) {
            if (count[i] > 0) {
   


