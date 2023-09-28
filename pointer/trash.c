#include<stdio.h>

int y;

/*
    Function to add two numbers and
    return the result
*/
int add(int m, int n)
{
    if(n == 0)
        return m;

    /*
        Recursion: adding 1, n times and 
        then at the end adding m to it
    */
    printf("\tattempting'M' %d\n",m);
    
    printf("\tattempting'N' %d\n",n);
    y = add(m, n-1) + 1;
    printf("\tattempting'Y' %d\n",y);
    return y;   // return the result
}

int main()
{
    int a, b, r;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    r = add(a, b);     // function call
    printf("\n\nSum of two numbers is: %d\n\n", r);
   
    return 0;
}