#include <stdio.h>
int main() {
    int N,Patients,Total=0,OC;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&Patients);
        Total+=Patients;
        if (OC>100) {
            OC+=1;
        }
    }
    printf("Total Patients:%d\n",Total);
    printf("Overcrowded Days:%d",OC);
    return 0;
}
