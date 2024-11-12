#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);  
    
    while (T--) {
        int X, Y;  
        scanf("%d %d", &X, &Y);  
        
        int water_per_person = 2 * Y;
        
        int max_people = X / water_per_person;
        
        printf("%d\n", max_people);
    }
    
    return 0;
}

