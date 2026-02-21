#include <stdio.h>
int main() {
    int capacity, N, change;
    int occupied = 0, critical = 0, i = 0;
    scanf("%d%d", &capacity, &N);
    while(i < N) {
        scanf("%d", &change);
        occupied += change;
        if(occupied > (capacity * 0.9))
            critical++;
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d", critical);
    return 0;
