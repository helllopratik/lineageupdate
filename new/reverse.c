/*

Program to access Array of int Pointers


*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	char a[100],b[100];
	printf("\nEnter string 1 ");
	scanf("%s",a);
	// gets(a);
	printf("\nEnter String 2 ");
	scanf("%s",b);
	// gets(b);
	// char *aa,*bb;
	char *aa =a;
	char *bb =b;
	while(*aa){
		aa++;
	}
	while (*bb){
		*a = *b;
		bb++;
		aa++;
	}
	*aa='\0';
	printf("\n %s. ",a);



return 0;

}