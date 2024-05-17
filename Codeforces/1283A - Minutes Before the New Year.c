#include <stdio.h>

int main() {
    int t, h, m;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &h, &m);
        printf("%d\n", (1440 - (h * 60 + m)));
    }
    return 0;
}
