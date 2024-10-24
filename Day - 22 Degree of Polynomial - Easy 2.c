#include <stdio.h>

int findDegree(int *coefficients, int length) {
    int degree = 0;
    for(int i = 0; i < length; i++) {
        if(coefficients[i] != 0) {
            degree = i;
        }
    }
    return degree;
}

int main() {
    int numberOfTestCases;
    scanf("%d", &numberOfTestCases);

    for(int i = 0; i < numberOfTestCases; i++) {
        int numberOfTerms;
        scanf("%d", &numberOfTerms);

        int coefficients[numberOfTerms];
        for(int j = 0; j < numberOfTerms; j++) {
            scanf("%d", &coefficients[j]);
        }

        int degree = findDegree(coefficients, numberOfTerms);
        printf("%d\n", degree);
    }

    return 0;
}