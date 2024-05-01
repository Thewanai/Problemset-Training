#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t, flag, num, sus = 0;
    char drink[11][10] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", 
    "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    char client[102];

    scanf("%d", &t);
    while (t--) {
        flag = 0;
        num = -1;
        scanf("%s", client);

        if (client[0] >= 48 && client[0] <= 57) {
            num = atoi(client);
        } else {
            for (int i = 0; i < 11; i++) {
                if (strcmp(client, drink[i]) == 0) {
                    flag = 1;
                    break;
                }
            }
        }

        if (num > -1 && flag == 0) {
            if (num < 18) sus++;
        } else {
            if (flag) sus++;
        }
    }
    
    printf("%d", sus);
    return 0;
}
