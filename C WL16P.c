#include <stdio.h>

int main() {
    int maxWeight, n, i = 0, weight;
    int total = 0, count = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &weight);
        total += weight;
        if(total > maxWeight)
            break;
        count++;
        i++;
    }
    printf("People Entered: %d\n", count);
    if(total > maxWeight)
        printf("Overload Status: Yes");
    else
        printf("Overload Status: No");
    return 0;
}
