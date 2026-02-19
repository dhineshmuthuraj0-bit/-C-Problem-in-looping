#include <stdio.h>
int main() {
    int batteryPercentage,N,a;
    scanf("%d",&batteryPercentage);
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&a);
        batteryPercentage-=a;
    }
    printf("Remaining Battery:%d%%",batteryPercentage);
    return 0;
