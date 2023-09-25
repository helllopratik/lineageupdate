/*

Program for Dynamic Memory Allocation using malloc()

*/

#include <stdlib.h>
#include <stdio.h>
int main() {
int a,b,*ptr,c,d;
printf("Enter total element : ");
scanf("%d",&a);

ptr = (int *)malloc(a*sizeof(int));
if (ptr == NULL){
    printf("\nInvalid Input");
    return 500;

}
else {
    for(b=0;b<a;b++){
        printf("Enter element for position %d",b);
        scanf("%d",*(&ptr[b]));
    }
};
printf("\n Entered element :");
for(b=0;b<a;b++){
    
    printf("%d",*(&ptr[b]));
}
    

    return 0;
}