#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        
        int dsa_dragon, toc_dragon, dm_dragon;
        scanf("%d %d %d", &dsa_dragon, &toc_dragon, &dm_dragon);
      
        int dsa_sloth, toc_sloth, dm_sloth;
        scanf("%d %d %d", &dsa_sloth, &toc_sloth, &dm_sloth);

        
        int total_dragon = dsa_dragon + toc_dragon + dm_dragon;
        int total_sloth = dsa_sloth + toc_sloth + dm_sloth;

        if (total_dragon > total_sloth) {
            printf("Dragon\n");
        } else if (total_dragon < total_sloth) {
            printf("Sloth\n");
        } else {
            if (dsa_dragon > dsa_sloth) {
                printf("Dragon\n");
            } else if (dsa_dragon < dsa_sloth) {
                printf("Sloth\n");
            } else { 
                if (toc_dragon > toc_sloth) {
                    printf("Dragon\n");
                } else if (toc_dragon < toc_sloth) {
                    printf("Sloth\n");
                } else {
                    printf("Tie\n");
                }
            }
        }
    }

    return 0;
}
