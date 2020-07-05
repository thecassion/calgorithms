#include <stdio.h>
#include "bubble_sort.h"

int main(){
    int A[5]={2,7,4,0,11};
    bubbleSort(A,5);
    for(int i=0;i<5;i++){
        printf("A[%d] = %d \n",i,A[i]);
    }
}