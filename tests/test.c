#include <stdbool.h>
#include <stdio.h>
#include <limits.h>
#include "../include/my_abs.h"


void test(void)
{
	bool result = (my_abs(-100) == 100) && (my_abs(100) == 100);
	bool special = (my_abs(INT_MIN) == -1) && \
			(my_abs(INT_MAX) == INT_MAX) && \
			(my_abs(0) == 0);

	if (result && special)
    		puts("ok");
	else
		puts("ko");
}

int main(void)
{
	test();
}
