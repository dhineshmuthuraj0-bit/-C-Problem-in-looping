#include <stdio.h>
int main() {
    int n,maxweight,weight,i=0,count=0,total=0;
    scanf("%d%d",&maxweight,&n);
    while(i<n) {
        scanf("%d",&weight);
        if(total+weight>=maxweight) {
            total+=weight;
            count++;
        }
        else {
            break;
        }
        i++;
    }
    printf("Passengers Allowed: %d\n",count);
    if (1<n) {
        printf("Overload:Yes");
    }
    else {
        printf("Overload:No");
    }
    return 0;
}
