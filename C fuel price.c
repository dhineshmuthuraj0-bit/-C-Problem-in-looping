#include <stdio.h>

int main() {
    int N;
    int price;
    int highestprice;
    int count=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++) {
        scanf("%d",&price);
        if (price>highestprice) {
            highestprice=price;
        }
        if (price>100) {
            count++;

        }
    }
    printf("Highest price: %d\n",highestprice);
    printf("Highest price days: %d\n",count);
    return 0;
}
