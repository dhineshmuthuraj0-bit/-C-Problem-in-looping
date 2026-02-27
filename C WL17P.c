#include <stdio.h>

int main() {
    int balance, n, i = 0, amount;
    int success = 0;
    scanf("%d", &balance);
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &amount);
        if(balance >= amount) {
            balance -= amount;
            success++;
        } else {
            break;
        }
        i++;
    }
    printf("Successful Purchases: %d\n", success);
    printf("Final Balance: %d", balance);
    return 0;
}
