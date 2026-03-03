#include <stdio.h>
int main() {
    int N, vehicles, congestion = 0, longest = 0, streak = 0, i = 0;
    scanf("%d", &N);
    while(i < N) {
        scanf("%d", &vehicles);
        if(vehicles > 20) {
            congestion++;
            streak++;
            if(streak > longest) longest = streak;
        } else streak = 0;
        i++;
    }
    printf("Congestion Minutes: %d\nLongest Congestion Streak: %d\n", congestion, longest);
    return 0;
}
