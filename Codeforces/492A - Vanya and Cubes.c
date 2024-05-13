#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1, j = 0; n > 0; i++) {
        j += i;
        n -= j; 
        sum++;       
    }
    if (n < 0) sum--;
    printf("%d", sum);
    return 0;
}
