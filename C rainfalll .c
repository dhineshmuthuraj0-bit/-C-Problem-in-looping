#include <stdio.h>
int main() {
    int days,rainfall,total=0,heavyraindays ;
    scanf("%d",&days);
    for(int i=0;i<days;i++) {
        scanf("%d",&rainfall);
        total+=rainfall;
        if (rainfall>50) {
            heavyraindays+=1;
        }
    }
    printf("Total Rainfall :%d\n",total);
    printf("Heavy rain days:%d\n",heavyraindays);
}
