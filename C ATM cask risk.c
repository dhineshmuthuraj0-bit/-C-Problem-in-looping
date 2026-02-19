#include <stdio.h>
int main() {
    int initialCash, N, withdraw;
    int risk = 0;
    scanf("%d", &initialCash);
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &withdraw);
        initialCash -= withdraw;
        if(initialCash < 5000)
            risk++;
    }
    printf("Remaining Cash: %d\n", initialCash);
    printf("Risk Count: %d\n", risk);
    return 0;
}


