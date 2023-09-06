#include "ft_printf.h"

#include <stdio.h>

int	main(void)
{
	int	n;

	n = -1;


	//printf("%x\n", n);
	//ft_printf("%x\n", n);

	printf("%u\n", -1);
	ft_printf("%u", -1);
}
