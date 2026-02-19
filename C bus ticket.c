#include <stdio.h>
int main() {
    int N,ticket,Total=0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &ticket);
        Total+=ticket;
    }
    printf("TotaL Collection:$%d", Total);
    return 0;
}
