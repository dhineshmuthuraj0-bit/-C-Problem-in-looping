#include <stdio.h>
int main() {
    int N, delay, total = 0, count = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &delay);
        total += delay;
        if(delay > 30)
            count++;
    }
    printf("Total Delay: %d\n", total);
    printf("Delayed Deliveries: %d\n", count);
    return 0;
}
