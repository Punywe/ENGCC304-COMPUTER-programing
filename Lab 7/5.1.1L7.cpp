#include <stdio.h>

int main(){

    int i = 1 ;
    int n  ;
    
    printf("Input : ");
    scanf("%d",&n);

    while ( n >= i)
	{
		n--;

		if ((n==i || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) 
		&& (n != 2 && n != 3 && n != 5 && n != 7))
		{
			continue;
		}

		printf("%d\t",n);
	}
    return 0 ;
}