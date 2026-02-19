#include <stdio.h>
int main() {
    int N,Units,Total=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&Units);
        Total+=Units;
    }
    printf("%d\n",Total);
    return 0;
}
