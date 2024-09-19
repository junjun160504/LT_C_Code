#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a;
	scanf("%d", &a);
	int gio = a / 3600;
	int dugio = a % 3600; 
	int phut =  dugio / 60;
	int giay = dugio % 60; 
	if (gio<10) { printf ("0%d:", gio); } else { printf("%d:", gio);	} 
	if (phut<10) { printf ("0%d:", phut); } else { printf("%d:", phut);	}
	if (giay<10) { printf ("0%d", giay); } else { printf("%d", giay);	}  
	return 0; 
 } 
