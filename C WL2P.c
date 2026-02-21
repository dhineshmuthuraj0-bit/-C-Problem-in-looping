#include <stdio.h>
int main() {
    int n, i = 0, trans;
    int balance, lowDays = 0;
    scanf("%d", &n);
    scanf("%d", &balance);
    while(i < n) {
        scanf("%d", &trans);
        balance += trans;
        if(balance < 2000)
            lowDays++;
        i++;
    }
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d", lowDays);
    return 0;
}
