#include <stdio.h>
#include <math.h>
int arr[] = {2,1,4,5,6,7,8,9,0};
int odd(int arr[],int n);
int even=0;int oddd=0;
int main(){
    printf("Array Code\n");
    odd(arr,9);
    printf(" Even : %d, Odd : %d\n",even,oddd);

}

int odd(int arr[],int n){
    int i = 0;
    // int even=0;int oddd=0;
    for(i=0;i<n;i++){
        // printf("Odd Number in the array\n");
        if(arr[i]%2!=0){
           even++;
        //    printf("odd numbers : %d\n",arr[i]);
        }
        else
        oddd++;
        // printf("Even Number : %d\n",arr[i]);

        

    }
return even,oddd;
   
}