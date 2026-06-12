#include <stdio.h>

int main()
{
	int i = 2; //i=2
	printf("The value is %d\n", i);
	i++; //i=3
	printf("The value is %d\n", i);
	++i; //i=4
	printf("The value is %d\n", i);

	printf("The value is %d\n", i++); //pehle print hogi ,baad m increase hogi (print value 4 hogi)
	printf("The value is %d\n", ++i); // pehle increase hogi ,baad m print hogi (print value 6 hogi)

	i = 2; //i=2
	printf("The value is %d\n", i);
	i--; //i=1
	printf("The value is %d\n", i);
	--i; //i=0
	printf("The value is %d\n", i);

	printf("The value is %d\n", i--); //pehle print hogi ,baad m decrease hogi (print value 0 hogi)
	printf("The value is %d\n", --i); // pehle decrease hogi ,baad m print hogi (print value -2 hogi)

	return 0;
}