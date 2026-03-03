#include <stdio.h>
int main() {
    int N, i = 1, drops = 0, crashDay = -1;
    scanf("%d", &N);
    int arr[N];
    for(int j=0;j<N;j++) scanf("%d",&arr[j]);
    int streak = 0;
    while(i < N) {
        if(arr[i] < arr[i-1]) {
            drops++;
            streak++;
            if(streak == 3 && crashDay == -1) crashDay = i+1;
        } else streak = 0;
        i++;
    }
    if(crashDay == -1) printf("Crash Day: Not Detected\n");
    else printf("Crash Day: %d\n", crashDay);
    printf("Total Drops: %d\n", drops);
    return 0;
}
