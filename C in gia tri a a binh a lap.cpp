#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a;
	scanf("%d", &a); 
	printf("%d %d %li %li\n", a, a*a, (long)a*a*a, (long)a*a*a*a);
	return 0; 
 } 
