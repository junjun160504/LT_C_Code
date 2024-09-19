#include <stdio.h>
void HoanHao(int n)
{
	int dem=0; 
	for(int i=1; i<n; i++)
		{
			if((n%i==0) )
			{
				dem+=i; 
			}
		} 
		if(dem==n)
		{
			printf("%d ", n); 
		}
		return;	
} 
int main()
{
	printf("\tSo hoan hao tu 1 den 1000 la: "); 
	for (int n=1;n<=1000;n++)
	{ 
	HoanHao(n);
	} 
	return 0; 
}
