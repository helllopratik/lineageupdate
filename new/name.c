//Program to find Factorial of a Number in C
/*
 * !n = n * (n - 1) * (n - 2) * . . . * 2 * 1 
 * 4! = 4*3*2*1 */

#include <stdio.h>
#include <ctype.h>

int a=1;
long int b=1; int c;

int main() {
	printf("Enter Integer value: ");
	scanf("%d",&c);
	printf("\n");
/*for (a=1;a<=c;a++) {

    b =b *a;


};*/
while(a<=c) {
 b = b*a;
 a++;
};
	printf("%ld",b);

return 0;
}   
