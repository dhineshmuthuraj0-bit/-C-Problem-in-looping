include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int delays[N];
    int i = 0;
    while (i < N) {
        scanf("%d", &delays[i]);
        i++;
    }
    int totalDelay = 0;
    int delayedDays = 0;
    i = 0;
    while (i < N) {
        totalDelay += delays[i];
        if (delays[i] > 2) {
            delayedDays++;
        }
        i++;
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d\n", delayedDays);
    return 0;
}
