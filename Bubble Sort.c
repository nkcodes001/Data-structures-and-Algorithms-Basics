#include<stdio.h>

void printArray(int* A,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A,int n){
    int temp;
    for(int i=0;i<n-1;i++)//for no. of passes
    {
        for(int j=0;j<n-1-i;j++)// for no. of comparisions
        {
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
   }
    
}

int main(){
    
    int A[]={12,54,65,7,34,9};
    int n=6;
    printArray(A,n);// BEFORE bubbleSORTING
    bubbleSort(A,n);
    printArray(A,n);//AFTER  bubbleSORTING 
    return 0;
}
