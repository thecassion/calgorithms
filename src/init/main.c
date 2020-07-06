#include <stdio.h>
#include <time.h>
#include "sort.h"

void printTable(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("T[%d]=%d \n",i,arr[i]);
    }
}

int main(){
     clock_t start, end;
     double cpu_time_used;
    int A[2][3]={{2,7,4},{0,11,3}};
    int B[6]={1,2,4,0,11,3};
    int C[6]={1,2,4,0,11,3};
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
    start = clock();
    insertionSort(C,6);
    end = clock();
    cpu_time_used = (end -start);

    printf("insertSort %f \n", cpu_time_used);
    printTable(C,6);
}