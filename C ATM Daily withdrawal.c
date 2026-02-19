#include <stdio.h>

int main() {
    int N,Amount,Total=0;
    scanf("%d",&N);
    for(int i=1;i<N;i++) {
        scanf("%d",&Amount);
        Total+=Amount;
    }
    if (Total<10000) {
        printf("Approved");
    }
    else {
        printf("Limited Exceeded");
    }

    return 0;
}
