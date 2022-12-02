#include <stdio.h>

int main(){
    char arr[50];
    printf("Enter your name: ");
    fgets(arr,50,stdin);
    puts(arr);
    printf("\n");
    printf("Your name %s",arr);

    return 0;

}