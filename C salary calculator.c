#include <stdio.h>
int main() {
    int salary,absentdays;
    scanf("%d%d",&salary,&absentdays);
    printf("Final Salary :%d",salary-absentdays*100);
    return 0;
}
