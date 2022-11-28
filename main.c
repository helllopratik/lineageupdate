#include <stdio.h>
#include <math.h>
int arr[] = {2,1,4,5,6,7,8,9,0};
int odd(int arr[],int n),even();
int main(){
    printf("Array Code\n");
    odd(arr,9);

}

int odd(int arr[],int n){
    int i = 0;
    for(i=0;i<n;i++){
        // printf("Odd Number in the array\n");
        if(arr[i]%2!=0){
           printf("odd numbers : %d\n",arr[i]);
        }
        else
        printf("Even Number : %d\n",arr[i]);
        

    }
   
}