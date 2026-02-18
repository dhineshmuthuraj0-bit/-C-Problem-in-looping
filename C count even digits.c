include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);

    for(int temp = n; temp > 0; temp /= 10) {
        int digit = temp % 10;
        if(digit % 2 == 0)
            count++;
    }

    printf("%d", count);
    return 0;
}
