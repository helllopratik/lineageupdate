#include <stdio.h>
void reverse(int arr[],int f);
int main(){
    int arr[] = {1,2,3,4,5,6};
    reverse(arr,6);
    printf("\n");
}
void reverse(int arr[],int f){
    for(int i=0;i<f/2;i++){
        int q = arr[i];
        int w = arr[f-i-1];
        w=arr[i];
        q=arr[f-i-1];
        printf("%d, %d",w,q);
    }

}