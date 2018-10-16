#include <stdio.h>
#include "func1.h"
#include "func2.h"

void preprocess()
{
	printf("preprocess\n");
}

void turbo_on()
{
	printf("turbo on\n");
}

void turbo_off()
{
	printf("turbo off\n");
}

int main()
{
	foo1();
	foo2();
	turbo_on();
	turbo_off();
	preprocess();
	return 0;
}

