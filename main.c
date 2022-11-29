#include <stdio.h>
#include <math.h>

int sum(int arr[],int n);
int show(int arr[],int n);
int x,y,z;
int main();
int arr[10];
int main(){
        printf("Choosen value 1 \n");
        printf("Total size of array : ");
        scanf("%d",&y);
        sum(arr,y);
    
    return 0;
}
int sum(int arr[],int n){

    for(int i =0;i<n;i++){
        printf("Enter value for index i = %d : ",i);
        scanf("%d",&arr[n-i+1]);
        // printf("%d\n",arr[n-i+1]);
    }
    for(int i =0;i<n;i++){
        int z = arr[(i+1)+(i+2)];
       printf("%d",arr[i]);
    }
    printf("\n***********************\n");
    // show(arr,n);

    
}

int show(int arr[],int n){
    for(int t=0;t<n;t++){
        printf("%d\n",arr[n-t+1]);
    }
    return 0;
}