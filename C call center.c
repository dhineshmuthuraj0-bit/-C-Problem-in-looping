#include <stdio.h>
int main() {
    int N, calls, total = 0, overload = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &calls);
        total += calls;
        if(calls > 40)
            overload++;
    }
    printf("Total Calls: %d\n", total);
    printf("Overloaded Hours: %d\n", overload);
    return 0;
}
