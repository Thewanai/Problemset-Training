#include <stdio.h>
#include <string.h>

int findMin(int a, int g, int c, int t) {
    int min;
    min = (a <= g) ? a : g;
    min = (min <= c) ? min : c;
    min = (min <= t) ? min : t;
    return min;
}

void decode(char gene[], int n, char nucleo) {
    static int i = 0;
    for (i; i < n; i++) {
        if (gene[i] == '?') {
            gene[i] = nucleo;
            break;
        }
    }
}

int main() {
    int n, a, g, c, t, m, min;
    a = g = c = t = m = 0;
    scanf("%d", &n);
    char gene[n+1];
    scanf("%s", gene);

    for (int i = 0; i < n; i++) {
        switch (gene[i]) {
            case 'A': a++; break;
            case 'G': g++; break;
            case 'C': c++; break;
            case 'T': t++; break;
            default: m++;
        }
    }

    while(m--) {
        min = findMin(a, g, c, t);
        if (min == a) {a++; decode(gene, n, 'A');}
        else if (min == g) {g++; decode(gene, n, 'G');}
        else if (min == c) {c++; decode(gene, n, 'C');}
        else {t++; decode(gene, n, 'T');}
    }

    if (a == g && g == c && c == t) {
        printf("%s", gene);
    } else printf("===\n");
    return 0;
}
