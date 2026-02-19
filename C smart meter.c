int main() {
    int N, voltage;
    int min, lowCount = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &voltage);
        if(i == 0)
            min = voltage;
        if(voltage < min)
            min = voltage;
        if(voltage < 210)
            lowCount++;
    }
    printf("Minimum Voltage: %d\n", min);
    printf("Low Voltage Events: %d\n", lowCount);
    return 0;
}
