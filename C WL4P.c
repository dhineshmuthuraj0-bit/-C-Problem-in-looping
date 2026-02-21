#include <stdio.h>
int main() {
    int n, i = 0, status;
    int streak = 0, maxStreak = 0;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &status);
        if(status == 0) {
            streak++;
            if(streak > maxStreak)
                maxStreak = streak;
        } else {
            streak = 0;
        }
        i++;
    }
    printf("Longest Failure Streak: %d", maxStreak);
    return 0;
}
