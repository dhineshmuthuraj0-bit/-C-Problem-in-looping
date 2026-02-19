#include <stdio.h>
int main() {
    int N, hours;
    int total = 0, heavy = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &hours);
        total += hours;
        if(hours > 3)
            heavy++;
    }
    printf("Total Overtime Hours: %d\n", total);
    printf("Overtime Cost: %d\n", total * 200);
    printf("Heavy Overtime Days: %d\n", heavy);
    return 0;
}
