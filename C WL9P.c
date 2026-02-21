#include <stdio.h>
int main() {
    int n,fuel,use,i=0,trips=0;
    scanf("%d%d",&fuel,&n);
    while(i<n) {
        scanf("%d",&use);
        if (fuel>=use) {
            trips++;
            fuel-=use;
        }
        else {
            break;
        }
        i++;
    }
    printf("Completed Trips: %d\n",trips);
    printf("Remaining Fuel: %d\n",fuel);
    return 0;
}
