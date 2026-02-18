#include <stdio.h>
int main() {
    int n, rev = 0;
    scanf("%d", &n);
    for(int temp = n; temp > 0; temp /= 10) {
        rev = rev * 10 + temp % 10;
    }
    if(rev == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}
