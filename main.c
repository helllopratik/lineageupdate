#include <stdio.h>
void reverse(int arr[],int n);
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    printf("reverse an array\n");
    reverse(arr,10);
    return 0;
}
void reverse (int arr[],int n){
        for(int i=0;i<=n;i++){
        printf("%d ",arr[n-i]);
        }
        printf("\n");
        }