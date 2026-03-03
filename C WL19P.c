#include <stdio.h>
int main() {
    int maxCapacity, N, patients, treated = 0, rejected = 0, i = 0;
    scanf("%d %d", &maxCapacity, &N);
    while(i < N) {
        scanf("%d", &patients);
        if(treated + patients <= maxCapacity) treated += patients;
        else {
            rejected += (treated + patients - maxCapacity);
            treated = maxCapacity;
        }
        i++;
    }
    printf("Treated Patients: %d\nRejected Patients: %d\n", treated, rejected);
    return 0;
}
