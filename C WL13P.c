#include <stdio.h>

int main() {
    int dataPack, N;
    int usage[100];
    int i = 0;
    int exhaustedDay = -1;
    int overused = 0;
    scanf("%d", &dataPack);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &usage[j]);
    }
    while(i < N) {
        dataPack -= usage[i];
        if(dataPack <= 0) {
            exhaustedDay = i + 1;
            if(dataPack < 0) {
                overused = -dataPack;
            }
            break;
        }
        i++;
    }
    if(exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }
    return 0;
}
