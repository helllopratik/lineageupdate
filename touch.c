#include <stdio.h>

int main (){
    int x,y,z;
    printf("number for fib: (n>2) ");
    scanf("%d",&z);
int fib[z];
    fib[0] = 0;
    fib[1] = 1;
for(int i = 2;i<z;i++){
    fib[i] = fib[i-1] + fib[i-2];
    printf("\n%d\t \n",fib[i]);

}
return 0;
}