#include <stdio.h>
int main() {
    int capacity, N, items;
    int overflow = 0;
    scanf("%d", &capacity);
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &items);
        capacity -= items;
        if(capacity < 0)
            overflow++;
    }
    printf("Remaining Capacity: %d\n", capacity);
    printf("Overflow Days: %d\n", overflow);
    return 0;
}

