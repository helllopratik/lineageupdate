#include <stdio.h>
#include <math.h>
int main(){
    int age = 21;
    int age_=41;
    int *ptr=&age;
    int *ptr_=&age_;
    printf("%d, %d Difference = %ld\n", *ptr, *ptr_, ptr_-ptr);
    // ptr_=&age;
    printf("Coparision = %d\n",ptr==ptr_);
    return 0;
}