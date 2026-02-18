#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int temp = n; temp > 0; temp /= 10) {
        int digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
    }
    if(sum == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}
