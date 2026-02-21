#include <stdio.h>
int main() {
    int totalData, n, i = 0, usage;
    int days = 0;
    scanf("%d", &totalData);
    scanf("%d", &n);
    while(i < n && totalData > 0) {
        scanf("%d", &usage);
        totalData -= usage;
        days++;
        i++;
    }
    if(totalData < 0)
        totalData = 0;
    printf("Days Used: %d\n", days);
    printf("Remaining Data: %dGB", totalData);
    return 0;
}
