#include <stdio.h>

int main(){
    int n,p;
    long long result=1;
    scanf("%d%d",&n,&p);
    for (int i=1;i<=p;i++) {
        result*=i;
    }
    printf("%lld",result);
    return 0;
}
