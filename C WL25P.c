#include <stdio.h>
int main() {
    int N, amt, highCount = 0, fraudAt = -1, streak = 0, i = 0;
    scanf("%d", &N);
    while(i < N) {
        scanf("%d", &amt);
        if(amt >= 50000) {
            highCount++;
            streak++;
            if(streak == 3 && fraudAt == -1) fraudAt = i+1;
        } else streak = 0;
        i++;
    }
    if(fraudAt == -1) printf("Fraud Triggered At Attempt: Not Triggered\n");
    else printf("Fraud Triggered At Attempt: %d\n", fraudAt);
    printf("High-Value Transactions: %d\n", highCount);
    return 0;
}
