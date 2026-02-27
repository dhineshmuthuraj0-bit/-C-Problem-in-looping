#include <stdio.h>

int main() {
    int n, i = 0, hours;
    int total = 0, burnout = 0;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &hours);
        total += hours;
        if(hours > 4)
            burnout++;
        i++;
    }
    printf("Total Overtime: %d\n", total);
    printf("Burnout Days: %d", burnout);
    return 0;
}
