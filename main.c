#include <stdio.h>
#include <math.h>

void stack(),printNumber(int arr[],int n);

int main(){
    printf("Array Printing Number");
    int arr[] = {1,2,3,4,5,6};
    printNumber(arr,6);
    return 0;
};
void printNumber(int arr[],int n){
    for(int i;i<n;i++){
        printf("%d \t",arr[i]);
        if(i==0){
            printNumber(arr,10);
        }
        if(i==7)
        stack();
        
    }
};
void stack(){
    printf("Call By value");
}