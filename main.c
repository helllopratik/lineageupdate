#include <stdio.h>
#include <math.h>
int sum(),sub();
int x = 10;
int y = 20;
int z = 30;
int main(){
   int *ptr=&x;
   int *ptrr = &y;
    printf("%d, %d \nDifference between two pointers is  %ld \n", *ptr,*ptrr, ptrr-ptr);
    *ptr=*ptrr;
    printf("Comarision = %u", ptr == ptrr);
    // sum();
//  sub();
    return 0;
};

int sum(){
    printf("Sum function Working\n");
    return 0;
};
int sub(){
    printf("sub function working\n");
    return 0;
}