#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int temp = n; temp > 0; temp /= 10) {
        int digit = temp % 10;
        sum += digit * digit * digit;
    }
    if(sum == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}



