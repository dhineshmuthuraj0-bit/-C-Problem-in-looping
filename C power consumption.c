#include <stdio.h>
int main() {
    int N, units, total = 0, spike = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &units);
        total += units;
        if(units > 5)
            spike++;
    }
    printf("Total Units: %d\n", total);
    printf("Spike Hours: %d\n", spike);
    return 0;
}
