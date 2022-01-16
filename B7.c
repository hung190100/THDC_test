#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2;
    scanf("%c %c", &c1, &c2);

    if (c1 < 65 || c1 > 122 || (c1 > 90 && c1 < 97) || c2 < 65 || c2 > 122 || (c2 > 90 && c2 < 97)) {
        printf ("Error");
    } else {
        if (c1 == c2 || c1 == c2 + 1 || c2 == c1 + 1) {
            printf("Null");
        }
        
        if (c1 > c2 && c1 >= 97 && c2 <= 90) {
            while (c2 != 90) {
                printf("%c ", ++c2);
            }
            char c = 'a';
            while (c != c1) {
                printf("%c ", c++);
            }
        } else if (c1 < c2 && c2 >= 97 && c1 <= 90) {
            while (c1 != 90) {
                printf("%c ", ++c1);
            }
            char c = 'a';
            while (c != c2) {
                printf("%c ", c++);
            }
        } else if (c1 > c2) {
            for (int i = c2 + 1; i < c1; i++) {
                printf("%c ", i);
            }
        } else {
            for (int i = c1 + 1; i < c2; i++) {
                printf("%c ", i);
            }
        }
    }

    return 0;
}
