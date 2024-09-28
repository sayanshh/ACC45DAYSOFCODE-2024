#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        int consonants = 0;
        int easy_to_pronounce = 1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                consonants = 0;
            } else {
                consonants++;
                if (consonants >= 4) {
                    easy_to_pronounce = 0;
                    break;
                }
            }
        }

        if (easy_to_pronounce) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}