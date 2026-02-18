#include <stdio.h>

int main() {
    int m,n,sum=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i+=m) {
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}

