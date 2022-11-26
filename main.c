#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void stack(),printNumber(int arr[],int n);

int main(){
    printf("Array Printing Number");
    int arr[] = {1,2,3,4,5,6};
    printNumber(arr,9);
    return 0;
};
void printNumber(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\t %d \n",arr[i]);
        // if(i==0){
        //     break;
        // }
        // if(i==7){
        // stack();
        // }
    }
};
void stack(){
    printf("Call By value\n");
    exit(0);
}