#include <stdio.h>
int main() {
    int membership;
    float amount, finalamount;
    scanf("%d", &membership);
    scanf("%f", &amount);
    if (membership == 1) {
        if (amount >= 100) {
            finalamount = amount-(amount*0.20);
        }
        else {
            finalamount = amount-(amount*0.10);
        }
        printf("%0.2f", finalamount);
    }
    else if (membership == 0) {
        printf("%0.2f", amount);
    }
    else {
        printf("Invalid member details");
    }
