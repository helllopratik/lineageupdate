#include <stdio.h>
#include <math.h>

int main()
{
int x,y,z;
printf("C language in program example in one file example");
printf("\nEnter value for X: ");
scanf("%d",&x);
printf("\nEnter Value  for Y: ");
scanf("%d",&y);
printf("\nEnter Value for Z: ");
scanf("%d",&z);
printf("This are the value assigned by the user input \n For X =  %d\n For Y =  %d\n For Z = %d\n",x, y, z);
printf("Swaping program");
int temp = x;
x = y;
y = temp;
printf("Swapped Value is as follows : For X = %d\n For Y = %d\n For Z = %d\n ",x, y, z);
return 0;
}
