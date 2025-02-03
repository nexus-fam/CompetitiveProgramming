// https://codeforces.com/problemset/problem/4/A

#include <stdio.h>

int main() {
    int i, j,w;
    scanf("%d", &w);

    for (i = 0; i <= 100; i++) {
        for (j = 0; j <= 100; j++) {
            if (i * 2 + j * 2 == w && i > 0 && j > 0) {
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
    return 0;
}