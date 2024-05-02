#include <stdio.h>
#include <string.h>

int main() {
    int n, team1 = 0, team2 = 0;
    char team[12], teamA[12] = "", teamB[12] = "";
    scanf("%d", &n);

    while (n--) {
        scanf("%s", team);
        if (strcmp(teamA, "") == 0) {
            strcpy(teamA, team);
            team1++;
        } else if (strcmp(team, teamA) == 0) {
            team1++;
        } else if (strcmp(teamB, "") == 0) {
            strcpy(teamB, team);
            team2++;
        } else if (strcmp(team, teamB) == 0) {
            team2++;
        }
    }
    
    (team1 > team2) ? printf("%s", teamA) : printf("%s", teamB);
    return 0;
}
