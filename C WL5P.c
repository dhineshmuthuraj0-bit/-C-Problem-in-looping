#include <stdio.h>

int main() {
    int N, status;
    int success = 0, cancel = 0, i = 0;
    scanf("%d", &N);
    while(i < N) {
        scanf("%d", &status);
        if(status == 1)
            success++;
        else
            cancel++;
        i++;
    }
    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancel);
    if(cancel > success)
        printf("Status: Risk");
    else
        printf("Status: Safe");
    return 0;
}
