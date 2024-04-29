#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    char color[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf(" %c", &color[i][j]);
            if (color[i][j] == 'C' || color[i][j] == 'M' || color[i][j] == 'Y') {
                printf("#Color\n");
                return 0;
            }
        }
    }
    printf("#Black&White\n");
    return 0;
}
