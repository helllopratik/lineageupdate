//make a program to take entry of a digit and show in ascending and descending order;

#include <stdio.h>
#include <math.h>
int x,y;
int *z;
int main(){
    printf("\nArray initilazation code\n");
    printf("\nType a number which will set array size\n");
    scanf("%d",&x);
    z=&x;
    int arr[x];
    printf("\n Array valuse  set : %d\n", x);
    printf("\n for Insert 1. \t For travel asc press 2. \t For travel desc type 3.\n");
    scanf("%d",&y);
    switch (y){
        case 1: printf("case 1 selected\n");
        for(int i=0;i<x;i++){
            printf("\n This section is for insertion ");
            printf("\n For postion %d Enter value : ",i);
            scanf("%d",arr);
            arr[i+1];
            printf("\n Value in array : %d \n",arr[1+1]);
        }
        break;
        case 2: printf("case 2 selected\n");
            for(int i=0;i<x;i++){
                printf("\n This section is for Travelsing the array");
                // printf("\n For postion %d Enter value : ",i);
                // scanf("%d",arr+0);
                printf("\n Value in array : %d \n",arr[x+i]);
        }
        break;
        case 3: printf("case 3 selected\n");
        for(int i=0;i<x;i++){
            printf("\n This section is for Travelsing the array descending order ");
            // printf("\n For postion %d Enter value : ",i);
            // scanf("%d",arr+0);
            printf("\n Value in array : %d \n",arr[x-i]);
        }
        break;

        default: printf("no invalid\n");
        
    }
return 0;}