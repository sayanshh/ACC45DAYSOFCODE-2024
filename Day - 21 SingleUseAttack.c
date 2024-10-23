#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y); 

        int attacks_only_regular = (int)ceil((double)H / X);
        
        int attacks_after_special = (H - Y > 0) ? (int)ceil((double)(H - Y) / X) : 0;
        
        int total_attacks_with_special = 1 + attacks_after_special;

        int minimum_attacks = (attacks_only_regular < total_attacks_with_special) 
                              ? attacks_only_regular 
                              : total_attacks_with_special;

        printf("%d\n", minimum_attacks); 
    }

    return 0;
}

