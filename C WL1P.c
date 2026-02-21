#include <stdio.h>

int main() {
    int n,i=0,noice,violation=0,streak=0,maxstreak=0;
    scanf("%d",&n);
    while(i<n) {
        scanf("%d",&noice);
        if(noice>70) {
            streak++;
            violation++;
        }
        if (streak>maxstreak) {
            maxstreak=streak;
        }
        else {
            streak=0;
        }
        i++;
        }
    printf("Noice Violation: %d\n",violation);
    printf("Longest Violation Streak: %d\n",maxstreak);
    return 0;
}
