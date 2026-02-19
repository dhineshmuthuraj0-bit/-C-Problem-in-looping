#include <stdio.h>

int main() {
    int N, revenue;
    long total = 0;
    int targetDays = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &revenue);
        total += revenue;
        if(revenue > 50000)
            targetDays++;
    }
    printf("Total Revenue: %ld\n", total);
    printf("Target Days: %d\n", targetDays);
    return 0;
}
