#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a+b>c && a+c>b && b+c>a)
	{
		if (a==b && a==c) { printf ("4"); }
		else if (a==b || a==c || b==c) { printf ("3"); }
		else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) { printf ("2");}
		else {printf("1");	}
	 } 
	else {printf ("0");}
	return 0;  	
 } 
