#include <stdio.h>
int main() {
    int fuel, N, burn, i = 0, emergency = -1, wasted = 0;
    scanf("%d %d", &fuel, &N);
    while(i < N) {
        scanf("%d", &burn);
        fuel -= burn;
        if(fuel < 0 && emergency == -1) {
            emergency = i+1;
            wasted = -fuel;
        }
        i++;
    }
    if(emergency == -1) printf("Emergency Stage: Not Occurred\nFuel Wasted: 0\n");
    else printf("Emergency Stage: %d\nFuel Wasted: %d\n", emergency, wasted);
    return 0;
}
