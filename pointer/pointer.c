/*



C Program to find the
largest Element in an Array
using Recursion

*/
#include <math.h>
#define MAX 100;
int a,b,c,d,z,y,max;
#include <stdlib.h>
#include <stdio.h>
char i[100];
char *j;
char* sum(char* i);
int main() {
   
    printf("\nEntrer value1 total element: ");
    scanf("%s", i);
    j=sum(i);


    printf("\n\tC = %s.\n",j);


return 56;
}
char* sum(char *i){
    static int temp =1;
    static char j[100];
    if(*i){
        sum(i+1);
        j[temp++]=*i;
    }
    return j;

 
   }
    





