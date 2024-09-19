#include <stdio.h>
#include <stdlib.h> 
int main ()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d", &a[i]); 
	 } 
	for (int i=0;i<n;i++)
	{
		printf("arr(%d):%d\n", i ,a[i]); 
	 } 
	
	for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
        	int temp=0;
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
	return 0;
}
