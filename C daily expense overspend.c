#include <stdio.h>

int main(){
    int days,amount_days,TotalExpense=0,OverspendDays=0;
    scanf("%d",&days);
    for(int i=1;i<=days;i++) {
        scanf("%d",&amount_days);
        TotalExpense+=amount_days;
        OverspendDays+=(amount_days>1000);
        }
    printf("TotalExpense :%d\n",TotalExpense);
    printf("OverspendDays:%d\n",OverspendDays);
return 0;
}
