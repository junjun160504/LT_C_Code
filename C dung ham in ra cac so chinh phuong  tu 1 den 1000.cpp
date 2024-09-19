#include <stdio.h>
#include <math.h> 
int  ChinhPhuong(int n)
{
	int i; 
	while(i*i<=n)
 	{	
		 if(i*i==n)
		 { 
			return 1;
		 }
		 	++i; 
 	} 		 
}
int main()
{
 	int dem=0;
	int tong=0; 
	printf("Cac so chinh phuong tu 1 den 1000 la: \n"); 
	for (int i=2; i<=1000; i++)
	{
		if(ChinhPhuong(i)==1)
		{
			printf("%d\t",i);
			dem+=1;
			if(dem%15==0)
			{
				printf("\n"); 
			 } 
			tong+=i; 
		}  	
	 } 
	 printf("\nTong cac so chinh phuong tu 1 den 1000 la: %d",tong);
	return 0; 
 } 
