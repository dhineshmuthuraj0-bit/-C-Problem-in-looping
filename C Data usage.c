#include <stdio.h>
int main() {
    int N,data,total=0,high;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&data);
        total+=data;
        if(high>2) {
            high+=1;
        }
    }
    printf("Total Data:%d\n",total);
    printf("High Usage Days:%d\n",high);
    return 0;
}
