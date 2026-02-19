#include <stdio.h>
int main() {
    int N,LU,Total=0,HL=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&LU);
        Total+=LU;
        if (LU>100){
            HL+=1;
        }
    }
        printf("Total Loss:%d\n",Total);
        printf("High Loss Days :%d",HL);
    return 0;
}
