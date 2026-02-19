#include <stdio.h>
int main() {
    int totalData, N, usage;
    int success = 0;
    scanf("%d", &totalData);
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &usage);

        if(totalData >= usage) {
            totalData -= usage;
            success++;
        }
    }
    printf("Remaining Data: %d\n", totalData);
    printf("Successful Days: %d\n", success);
    return 0;
}
