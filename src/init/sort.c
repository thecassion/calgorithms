#include <stdio.h>
int qPartition(int arr[], int first, int last);
// This function accepts the address of the first element in an array with the product of the dimensions
/* Example
int A[3][4][6]={{{},..},..}
bubbleSort(&A[0][0][0],3*4*6)
*/
void  bubbleSort(int *arr,int n){
    int i, j, temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(*(arr +j)> *(arr+ j+1) ){
                temp=*(arr + j );
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}

/*
Quicksort implementation in C
@thecassion
*/

void quickSort(int arr[] , int first, int last){
    //if the last
    int p ;
    if(last <= first){
        return;
    }else
    {
        p = qPartition(arr,first,last);
        //divide and conquere
        quickSort(arr,p+1,last); // after p
        quickSort(arr,first,p-1); // before p
    }
}

int qPartition(int arr[], int first, int last){
    //find the pivot
    int i = first;
    int j = last-1;
    int temp;
    int pivot = arr[last];
    while(1)
    {
        while(arr[i]<pivot){i=i+1;}
        while((arr[j]>pivot)){j=j-1;}
        if(i>=j){
            break;
        }else
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i];
    arr[i]=arr[last];
    arr[last]=temp;
    return i;
}

void insertionSort(int arr[], int n){
    int i, j, key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>-1 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}