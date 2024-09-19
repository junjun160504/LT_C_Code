#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char NA, HOANG; 
	scanf("%c %c", &NA, &HOANG);
	if  (NA==HOANG)	{printf ("DRAW");	}
	else if (NA=='B' && HOANG == 'K') { printf ("NA");	} 
	else if (NA=='G' && HOANG == 'B') { printf ("NA");	} 
	else if (NA=='K' && HOANG == 'G') { printf ("NA");	} 
	else { printf ("HOANG"); } 
	return 0; 
 } 
