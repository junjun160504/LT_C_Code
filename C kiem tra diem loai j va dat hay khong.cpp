#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float a;
	scanf("%f", &a);
	if (0.0 < a && a  < 5.0) { printf ("F\nNO\n");	}
	else if (5.0 <= a && a < 6.0) { printf ("D\nYES\n");	}
	else if (6.0 <= a && a < 7.0) { printf ("C\nYES\n");	}
	else if (7.0 <= a && a  < 8.5) { printf ("B\nYES\n");	}
	else if (8.5 <= a && a  <= 10.0) { printf ("A\nYES\n");}
	return 0;  	
 } 
