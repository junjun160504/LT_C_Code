#include <stdio.h>
#include <string.h> 
int main() 
{ 	int n; 
	scanf("%d", &n); 
	while(n--) 
	{ 	int h; 
		scanf("%d", &h); 
		char st[100][100]; 
		for(int i=1;i<=h;i++) 
			scanf("%s", st[i]); 
			for(int i=1;i<h;i++) 
				for(int j=i+1;j<=h;j++) {
			 char s1[200], s2[200]; 
			 strcpy(s1, st[i]); 
			 strcpy(s2, st[j]); 
			 strcat(s1, st[j]); 
			 strcat(s2, st[i]); 
			 if(strcmp(s1, s2)>0) 
			 {
			  char r[255]; 
			  strcpy(r, st[i]); 
			  strcpy(st[i], st[j]); 
			  strcpy(st[j], r); } 
			  } 
			  	for(int i=1;i<=h;i++) 
			  	printf("%s", st[i]); 
				printf("\n"); } }
