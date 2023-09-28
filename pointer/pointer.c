/*



A Fibonacci series is defined as a series in which,
each number is the sum of the previous two numbers with 1, 1
being the first two elements of the series.

*/

#include <stdlib.h>
#include <stdio.h>
static long int first=0,second=1,y;
int sum(int y);
int main() {
    int a,b,c;
    printf("\nEntrer value1 to find fibonacci of: ");
    scanf("%d",&a);
    printf("%d ",1);
    // printf("\nEntrer value2: ");
    // scanf("%d",&b);
    c=sum(a);
    printf("\n\tC = %d.\n",c);


return 56;
};
int sum(int p){
    /*if(p==0|| p==1){
        return 1; 
    }/*
   /* else if (p==0){
        return o;
    }
    */
   if(p>1){
    y=first+second;
    first=second;
    second=y;
    printf("%ld ",y);
    sum(p-1);

   }
    else{
        printf("\n\n\n");
    }
    // return y;
   }















