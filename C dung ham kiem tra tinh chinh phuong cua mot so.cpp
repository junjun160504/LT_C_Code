#include <stdio.h>
#include <math.h> 
int ChinhPhuong(int n)
{
	int i; 
	while(i*i<=n)
 	{	
		 if(i*i==n)
		 {
			printf("%d la so chinh phuong\n",n);
			return 0;
		 }
		 	++i;
	}	
	printf("%d khong phai so chinh phuong\n",n);
 } 
int main()
{
	int n;
	printf("Nhap so can kiem tra so chinh phuong: "); scanf("%d",&n);
	ChinhPhuong(n); 
	return 0; 
 } 
