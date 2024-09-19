#include <stdio.h>
int main ()
{
	int a;
	printf("\tNhap thang: "); 
	scanf ("%d", &a);
	if (a==1 || a==3 || a==5 ||a==7 || a==8 || a==10 || a==12) 
	{	printf ("\tThang %d co 31 ngay.", a);	}
	else if (a==4 || a==6 || a==9 || a==11)
	{	printf ("\tThang %d co 30 ngay.", a);	}
	else if (a==2)
	{	printf ("\tThang %d co 30 ngay.", a);	}
	else 
	{	printf ("\tKhong hop le!");	}
	return 0; 
 }
