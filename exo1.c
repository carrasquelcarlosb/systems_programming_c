#include <stdio.h>
/*
 Carrasquel Villarroel, Carlos Benicio 
 MIT Licence  
*/
void two_powerOF(int exp) 
{
	int base = 2;
	long double product = 1.0;
	while( exp != 0)
	{	
		product *= base;
		printf("%d^%.0Lf\n",base,product);
		--exp;	
	}	
}

void main()
{
	two_powerOF(10);
}
	
