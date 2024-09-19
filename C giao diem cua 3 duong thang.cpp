#include <stdio.h>
#include <stdlib.h>
int main ()
{
	long long a, b, c, d, e, f;
	scanf("%lli %lli %lli %lli %lli %lli", &a, &b, &c, &d, &e, &f);
	if (a+b>c && a+c>b && b+c>a)
	{
		if (a>d && b>e && c>f) 
		{
			if ((d*e*f)/((a-d)*(b-e)*(c-f))==1)	{	printf ("YES"); 	 } 
			else {printf("NO"); }
		}
		else { printf ("NO");	} 
	}
	else { printf ("NO");	} 
	return 0; 
 } 
