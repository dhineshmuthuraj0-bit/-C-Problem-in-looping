#include <stdio.h>
int main() {
    int capacity, N, load, safeHours = 0, failures = 0, i = 0;
    scanf("%d %d", &capacity, &N);
    while(i < N) {
        scanf("%d", &load);
        if(load > capacity) failures++;
        else safeHours++;
        i++;
    }
    printf("Safe Hours: %d\nFailure Count: %d\n", safeHours, failures);
    return 0;
}
