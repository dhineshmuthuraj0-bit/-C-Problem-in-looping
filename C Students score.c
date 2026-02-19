#include <stdio.h>
int main() {
    int N,marks,average=0,fail;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&marks);
        average=average+marks/N;
        if(marks<40) {
            fail+=1;
        }
    }
    printf("Average Score :%d\n",average);
    printf("Failed Subjects:%d",fail);
    return 0;
    }
