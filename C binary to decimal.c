#include <stdio.h>
int main() {
    int n, decimal = 0, base = 1;
    scanf("%d", &n);
    for(int temp = n; temp > 0; temp /= 10) {
        int digit = temp % 10;
        decimal += digit * base;
        base *= 2;
    }
    printf("%d", decimal);
    return 0;
}
