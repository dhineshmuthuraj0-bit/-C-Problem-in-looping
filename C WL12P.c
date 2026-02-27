#include <stdio.h>
int main() {
    int n,power,max,hours=0,i=0;
    scanf("%d",&n);
    while(i<n) {
        scanf("%d",&power);
        if(power>max) {
            max=power;
        }
        if(power>5) {
            hours++;
        }
    i++;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d\n",hours);
}
