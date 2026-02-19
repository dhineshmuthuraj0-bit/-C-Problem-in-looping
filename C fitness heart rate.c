#include <stdio.h>
int main() {
    int N, rate, max = 0, danger = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &rate);
        if(rate > max)
            max = rate;
        if(rate > 140)
            danger++;
    }
    printf("Max Heart Rate: %d\n", max);
    printf("Danger Readings: %d\n", danger);
    return 0;
}

