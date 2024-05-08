#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%[^\n]s", str);
    int len = strlen(str) - 2;
    char c = str[len];
    while (1) {
        if (c >= 65 && c <= 90) break;
        if (c >= 97 && c <= 122) break;
        len--;
        c = str[len];
    }
    if (c < 97) c += 32;
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'y') printf("YES");
    else printf("NO");
    return 0;
}
