#include <stdio.h>
int main() {
    int N;
    long long fact=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        fact*=i;
    }
        printf("%lld ",fact);

    return 0;
    }

