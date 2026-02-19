#include <stdio.h>
int main() {
    int N,count=0;
    char attendance,temp;
    scanf("%d",&N);
    for (int i=0;i<N;i++) {
        scanf("%c",&attendance);
        temp=attendance;
        if (count==0 && attendance=="A") {
            count++;
        }
        else if (attendance=='A' && 'A' ==temp) {
            count++;
            break;;
        }
        else {
            count=0;
        }
    }
    if (count>=3) {
        printf("Low Attendance");
    }
    else {
        printf("Good Attendance");
    }
    return 0;
}
