#include <stdio.h>

int main() {
    int t, sum, a, b, c, d;
    scanf("%d", &t);
    while (t--) {
        sum = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (b > a) sum++;
        if (c > a) sum++;
        if (d > a) sum++;
        printf("%d\n", sum);
    }
    return 0;
}
