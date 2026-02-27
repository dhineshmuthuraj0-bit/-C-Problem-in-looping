#include <stdio.h>

int main() {
    int cash,n,amount,succ=0,i=0;
    scanf("%d",&cash);
    scanf("%d",&n);
    while(i<n) {
        scanf("%d",&amount);
        if (cash>=amount) {
            cash-=amount;
            succ++;
        }
        else {
            break;
        }
        i++;
    }
    printf("Successful Withdrawals: %d\n",succ);
    printf("Remaining Cash: %d\n",cash);
    return 0;
}
