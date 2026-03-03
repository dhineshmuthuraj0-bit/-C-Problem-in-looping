#include <stdio.h>
int main() {
    int N, attempt, failures = 0, totalFails = 0, lockAt = -1, i = 0;
    scanf("%d", &N);
    while(i < N) {
        scanf("%d", &attempt);
        if(attempt == 0) {
            failures++;
            totalFails++;
            if(failures == 3 && lockAt == -1) lockAt = i+1;
        } else failures = 0;
        i++;
    }
    if(lockAt == -1) printf("Lock Triggered At Attempt: Not Locked\n");
    else printf("Lock Triggered At Attempt: %d\n", lockAt);
    printf("Total Failed Attempts: %d\n", totalFails);
    return 0;
