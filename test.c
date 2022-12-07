#include <stdio.h>
int main() {
    int a = 3;
    int res = a++ + ++a + a++ + ++a;
    printf("%d\n", res);
	return 0;
}