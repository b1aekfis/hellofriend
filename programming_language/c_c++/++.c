#include <stdio.h>
int main() {
	int x=7;
	int y=x++; // postfix
	printf("y=%d x=%d\n",y, x);

	x=7;
	int z=++x; // prefix
	printf("z=%d",z);
}