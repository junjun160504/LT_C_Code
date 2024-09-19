#include <stdio.h>
#include <stdlib.h> 
int main ()
{
	int n;
	scanf("%d", &n);
	for (int i=2; i <n;)
	{	if (!(n%i))
		{ 	printf("%d x ", i);
			n/=i;
		 } 
		else
            ++i;}
    printf("%d", n);	  
	return 0;
}
