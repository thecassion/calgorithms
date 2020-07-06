#include <stdio.h>
#include <time.h>
#include "sort.h"


int main(){
     clock_t start, end;
     double cpu_time_used;
    int A[2][3]={{2,7,4},{0,11,3}};
    int B[6]={1,2,4,0,11,3};
    start = clock();
    bubbleSort(&A[0][0],6);
    end = clock();
    cpu_time_used = (end -start);

    printf("bubbleSort %f \n", cpu_time_used);

    start = clock();
    quickSort(B,0,5);
    end = clock();
    cpu_time_used = (end -start);

    printf("quickSort %f \n", cpu_time_used);

    for(int i=0; i<6;i++){
        printf("B[%d]=%d\n",i,B[i]);
    }
}