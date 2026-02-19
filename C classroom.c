#include <stdio.h>
int main() {
    int N, noise, max = 0, noisy = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &noise);
        if(noise > max)
            max = noise;

        if(noise > 70)
            noisy++;
    }
    printf("Maximum Noise: %d\n", max);
    printf("Noisy Periods: %d\n", noisy);
    return 0;
}
