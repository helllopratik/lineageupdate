//Program to reverse the case of input character

#include <stdio.h>
#include <ctype.h> // to use system defined function islower & toupper
#include <string.h>
char a[60];
char b[60];
int i,z;
int main()
{

 
    printf("Enter an alphabet : ");
    
    gets(a);
    z = strlen(a);
   // printf("%d",z);
    for (i=0;i<=z;i++){
			printf("%c ",a[z-i]);
		};
   /* printf("\n\nReverse case of %c is :  ",alphabet);

    if(islower(alphabet))
        putchar(toupper(alphabet));

    else 
        // must be an uppercase character
        printf("%c",tolower(alphabet)) ;

  */
  
    return 0;
}
