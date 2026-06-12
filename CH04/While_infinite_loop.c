#include <stdio.h>

int main()
{
	int i = 0;
	while(2<10){    // since 2<10 is always true ,so this condition will also form infinite loop
	printf("The value of i is %d\n", i);
	i++;
	}
	return 0;
}