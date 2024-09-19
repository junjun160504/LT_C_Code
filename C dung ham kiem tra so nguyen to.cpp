#include <stdio.h>
#include <stdlib.h> 
void NguyenTo(int n)
{
	int dem=0;
	if (n==1 || n<=0 ) 
	{printf ("%d khong phai la so nguyen to",n);} 
	else 
	{ 
	for (int i = 2; i <= n - 1  ; i++)
	{	if ((n % i) == 0 )
		{	dem++; } 
	} 
		
	if (dem==0)	{printf ("%d la so nguyen to",n);  } 
 	else { 	printf("%d khong phai la so nguyen to",n); }
	}
	return;
} 
int main ()
{
	int n;
	printf("Nhap so can kiem tra tinh nguyen to: "); 
	scanf("%d", &n); 
	NguyenTo(n);
	return 0; 
 } 
