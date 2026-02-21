#include <stdio.h>
int main() {
    int n,status,i=0,current=0,max=0;
    scanf("%d",&n);
    while(i<n) {
        scanf("%d",&status);
        if(status==0) {
            current++;
        }
        if (current>max) {
            max=current;
        }
        else {
            current=0;
        }
        i++;
    }
    printf("Longest Default Streak: %d\n",max);
    return 0;
}
