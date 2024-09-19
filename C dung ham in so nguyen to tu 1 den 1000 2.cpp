#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 2; i <= 1000; i++) 
	{
        int is_prime = 1;
        for (int j = 2; j < i; j++) 
		{
            if (i % j == 0) 
			{
                is_prime = 0;
                break;
            }
        }
        if (is_prime==1) {
            printf("%d \t", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    return 0;
}

