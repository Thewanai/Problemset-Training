#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    int f[n], p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }
    for (int i = 0; i < n; i++) {
        p[f[i]-1] = i+1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    return 0;
}
